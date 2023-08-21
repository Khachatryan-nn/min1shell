/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtin_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tikhacha <tikhacha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 01:33:26 by tikhacha          #+#    #+#             */
/*   Updated: 2023/08/21 14:19:43 by tikhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"
#include "init.h"

/* TODO: Add proper function pointers when they are ready */
t_flist	*builtin_init(void)
{
	t_flist	*head;

	head = NULL;
	flist_push_back(&head, flist_new(CD, cd));
	flist_push_back(&head, flist_new(ECHO, echo));
	flist_push_back(&head, flist_new(ENV, env));
	flist_push_back(&head, flist_new(EXIT, my_exit));
	flist_push_back(&head, flist_new(XPORT, export));
	flist_push_back(&head, flist_new(HISTORY, history));
	flist_push_back(&head, flist_new(PWD, pwd));
	flist_push_back(&head, flist_new(UNSET, unset));
	return (head);
}
