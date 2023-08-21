/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tikhacha <tikhacha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:51:45 by tikhacha          #+#    #+#             */
/*   Updated: 2023/08/21 14:19:43 by tikhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define OFFSET '0'

static short	is_num(const char *chr)
{
	if (*chr >= '0' && *chr <= '9')
		return (1);
	else
		return (0);
}

static short	is_whitespace(const char *chr)
{
	if ((*chr >= '\b' && *chr <= '\r') || *chr == 32)
		return (1);
	else
		return (0);
}

/*
*	Reference: <stdlib.h>
*
*	Description: ft_atoi() converts the inital portion of the string
*	pointed by *str to int.
*
*	Return Value: The converted value or 0 on error.
*/
int	ft_atoi(const char *str)
{
	int			num;
	short		sign;
	const char	*c;

	sign = 1;
	c = str;
	while (is_whitespace(c))
		c ++;
	if (*c == '-' || *c == '+')
	{
		if (*c == '-')
			sign = -1;
		c ++;
	}
	num = 0;
	while (*c != '\0')
	{
		if (!is_num(c))
			break ;
		num *= 10;
		num += (int)(*c - OFFSET);
		c++;
	}
	return (sign * num);
}
