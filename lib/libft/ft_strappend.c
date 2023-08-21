/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tikhacha <tikhacha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 19:12:55 by tikhacha          #+#    #+#             */
/*   Updated: 2023/08/21 14:19:43 by tikhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief		ft_straddpend() append a character `c` to the string str.
 *				If str is NULL, than it will create a new string with the
 * 				character `c` in it.
 * 
 * @param str	String character to be appended to.
 * @param c		Character to be appended.
 * @return int 	Returns 0 on successfull operation, 1 otherwise.
 */
int	ft_strappend(char **str, char c)
{
	const char	s[] = {c, '\0'};

	if (str)
	{
		if (*str == NULL)
			*str = ft_strdup(s);
		else
		{
			*str = ft_strjoin_free(*str, s);
			if (*str == NULL)
				return (1);
		}
	}
	return (0);
}
