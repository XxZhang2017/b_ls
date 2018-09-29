/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   appendnode.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 14:53:34 by xinzhang          #+#    #+#             */
/*   Updated: 2018/09/28 23:41:17 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

stat_dlist *appendnode(stat_dlist *dlist, s_stat *data, char *name, char *usr, char *gname)
{
	printf("in stat_dlist\n");
	stat_node	*tmp;

	tmp = (stat_node *)malloc(sizeof(stat_node));
	init_node(tmp, data, name, usr, gname);
//	if (dlist == NULL)
//		dlist = init_dlist();
	if (dlist->head == NULL && dlist->tail == NULL)
	{
		dlist->head = tmp;
		dlist->tail = tmp;
	}
	else
	{
		dlist->tail->next = tmp;
		dlist->tail = tmp;
	}
	(dlist->count)++;
	updatelen(&(dlist->maxlen), strlen(tmp->sname));
	return (dlist);
}
