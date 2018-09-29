/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_dlist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 21:05:09 by xinzhang          #+#    #+#             */
/*   Updated: 2018/09/28 23:28:11 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

stat_dlist	*init_dlist(param *p)
{
	stat_dlist	*dlist;
	dlist = (stat_dlist *)malloc(sizeof(stat_dlist));
	dlist->pa = p;
	dlist->head = NULL;
	dlist->tail = NULL;
	dlist->count = 0;
	dlist->maxlen = 0;
	dlist->totalsize = 0;
	return (dlist);
}

