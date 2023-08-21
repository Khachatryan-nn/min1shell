/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tikhacha <tikhacha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 17:01:08 by tikhacha          #+#    #+#             */
/*   Updated: 2023/08/21 14:19:49 by tikhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	pwd(t_wordl *cmd, t_control *ctl)
{
	char	*pwd;

	(void)cmd;
	pwd = getcwd(NULL, 0);
	if (pwd != NULL)
	{
		printf("%s\n", pwd);
		free(pwd);
		estat_set(ctl->estat, EXIT_SUCCESS);
		return (EXIT_SUCCESS);
	}
	perror(EPERROR);
	estat_set(ctl->estat, EXIT_FAILURE);
	return (EXIT_FAILURE);
}
