/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tikhacha <tikhacha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 02:25:20 by tikhacha          #+#    #+#             */
/*   Updated: 2023/08/21 14:19:43 by tikhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"
#include <libft.h>

void	drop(t_control *ctl, t_node *self)
{
	(void)ctl;
	if (self)
	{
		if (self->type == WordNode)
			wordl_clear(self->value.word);
		else if (self->type == ErrorNode)
			free(self->value.error);
		else if (self->type == CmdPrefixNode)
			nodel_clear(self->value.prefix, NULL);
		else if (self->type == CmdSuffixNode)
			nodel_clear(self->value.suffix, NULL);
		free(self);
	}
}
