/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tikhacha <tikhacha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 19:17:25 by tikhacha          #+#    #+#             */
/*   Updated: 2023/08/21 14:19:43 by tikhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	Reference: <string.h>
*
*	Description: ft_memset fill the first n bytes
*	of the memory area pointed by s with the constant
*	byte c.
*
*	Return Value: Returns a pointer to the memory area s.
*/
void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*mem;
	unsigned char	val;

	i = 0;
	val = (unsigned char)(c & 0xFF);
	mem = (unsigned char *)s;
	while (i < n)
	{
		*(mem + i) = val;
		i++;
	}
	return (mem);
}
