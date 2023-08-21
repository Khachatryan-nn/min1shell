/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tikhacha <tikhacha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 16:00:35 by tikhacha          #+#    #+#             */
/*   Updated: 2023/08/21 14:19:43 by tikhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

//static void	estat_set(t_control *ctl, int fail);

int	set(t_wordl *args, t_control *ctl)
{
	char	**split;
	char	**env;
	t_wordl	*temp;
	int		fail;

	fail = FALSE;
	temp = args;
	env = get_env_key(ctl->var_list);
	while (temp)
	{
		split = get_key_value(temp->word->value);
		if (!is_name(split[0]))
		{
			ft_dprintf(STDERR_FILENO, ERR_EXPORT, temp->word->value);
			fail = TRUE;
		}
		lst_set(ctl->var_list, LOCAL, split[0], split[1]);
		free_2d(split);
		temp = temp->next;
	}
	free(env);
	estat_set(ctl->estat, fail);
	return (fail);
}
