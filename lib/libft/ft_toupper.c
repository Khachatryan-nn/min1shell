/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tikhacha <tikhacha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 18:30:53 by tikhacha          #+#    #+#             */
/*   Updated: 2023/08/21 14:19:43 by tikhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	Reference: <ctype.h>
*
*	Description: ft_toupper converts leters to upppercase
*	equivalent, if that representation exists in current
*	locale.
*
*	Return Value: Uppercase equivalent or c if DNE.
*/
int	ft_toupper(int c)
{
	if (!ft_isalpha(c))
		return (c);
	else if (c >= 'A' && c <= 'Z')
		return (c);
	else
		return (c - 32);
}
