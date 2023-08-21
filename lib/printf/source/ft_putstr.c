/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tikhacha <tikhacha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 18:09:15 by tikhacha          #+#    #+#             */
/*   Updated: 2023/08/21 14:19:43 by tikhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helper.h"

int	printf_putstr_fd(int fd, char *str)
{
	int	count;

	count = 0;
	if (str)
	{
		while (*str)
		{
			write(fd, str++, 1);
			count ++;
		}
	}
	else
	{
		count = 6;
		write(fd, "(null)", 6);
	}
	return (count);
}
