/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tikhacha <tikhacha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 17:11:46 by tikhacha          #+#    #+#             */
/*   Updated: 2023/08/21 14:19:43 by tikhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	Reference: <ctype.h>
*
*	Description: Checks for a digit (0 - 9).
*
*	Return Value: Nonzero if the character falls
*	into the tested class, and zero if not.
*/
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (0x400);
	return (0);
}
