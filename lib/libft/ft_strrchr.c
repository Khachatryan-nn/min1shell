/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tikhacha <tikhacha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 00:37:11 by tikhacha          #+#    #+#             */
/*   Updated: 2023/08/21 14:19:43 by tikhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	Reference: <string.h>
*
*	Description: ft_strrchr() returns a pointer
*	to the first occurence of the character
*	c int the string s.
*
*	Return Value: Pointer to the matched
*	character of NULL if the character is not found
*/
char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*curr;

	i = ft_strlen(s);
	curr = (char *)(s + i);
	while (i-- >= 0)
	{
		if (*curr == (unsigned char)(c & 0xFF))
			return (curr);
		curr--;
	}
	return (NULL);
}
