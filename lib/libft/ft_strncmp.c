/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tikhacha <tikhacha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 01:33:08 by tikhacha          #+#    #+#             */
/*   Updated: 2023/08/21 14:19:43 by tikhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	Reference: <string.h>
*
*	Description: ft_strncmp compares the fisrt (at most)
*	n bytes of s1 and s2.
*
*	Return Value: ft_strncmp return an integer less than,
*	equal to, or greater than zero if
*		1. s1 < s2,
*		2. s1 == s2,
*		3. s1 > s2.	
*/
int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	char	*c1;
	char	*c2;

	c1 = (char *)s1;
	c2 = (char *)s2;
	while ((*c1 || *c2) && size--)
	{
		if (*c1 != *c2)
			return ((unsigned char)*c1 - (unsigned char)*c2);
		c1++;
		c2++;
	}
	return (0);
}
