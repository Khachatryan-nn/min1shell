/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_fork.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tikhacha <tikhacha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:07:34 by tikhacha          #+#    #+#             */
/*   Updated: 2023/08/21 14:19:43 by tikhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"
#include <libft.h>
#include <stdio.h>

int	my_fork(t_control *ctl)
{
	int	pid;

	pid = fork();
	if (pid < 0)
	{
		perror(EPERROR);
		estat_set(ctl->estat, EXIT_FAILURE);
		ctl->execute = EXIT_FAILURE;
	}
	return (pid);
}
