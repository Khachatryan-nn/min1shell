/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tikhacha <tikhacha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 00:43:20 by tikhacha          #+#    #+#             */
/*   Updated: 2023/08/21 14:19:43 by tikhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	Reference: <stdlib.h>
*
*	Description: ft_calloc allocates memory for an array of nmemb
*	elements of size bytes each and return a pointer to the
*	allocated memory. The memory is set to zero.
*
*	Return Value: Pointer to the allocated memory.
*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	siz;

	siz = size * nmemb;
	if (nmemb && size)
	{
		if ((siz < size || siz < nmemb))
			return (NULL);
	}
	ptr = malloc (siz);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, siz);
	return (ptr);
}
