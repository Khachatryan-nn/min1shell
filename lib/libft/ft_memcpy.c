/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tikhacha <tikhacha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 23:03:32 by tikhacha          #+#    #+#             */
/*   Updated: 2023/08/21 14:19:43 by tikhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	Reference: <string.h>
*
*	Description: ft_memcpy copies n bytes from 
*	memory area src to memory area dest.
*	The memory areas must not overlap!!!
*
*	Return Value: Pointer to dest.
*/
void	*ft_memcpy(const void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*sc;

	i = 0;
	if ((!dest) && (!src))
		return (NULL);
	dst = (unsigned char *)dest;
	sc = (unsigned char *)src;
	while (i < n)
	{
		*(dst + i) = *(sc + i);
		i ++;
	}
	return (dst);
}
