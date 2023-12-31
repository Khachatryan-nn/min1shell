/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tikhacha <tikhacha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 17:31:32 by tikhacha          #+#    #+#             */
/*   Updated: 2023/08/21 14:19:43 by tikhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	Reference: <ctype.h>
*
*	Description: Checks whether c is a 7-bit
*	unsigned character (0 - 127).
*
*	Return Value: Nonzero if the character falls
*	into the tested class, and zero if not.
*/
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (0x400);
	return (0);
}
