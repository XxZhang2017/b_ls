/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 19:45:28 by xinzhang          #+#    #+#             */
/*   Updated: 2018/09/25 19:49:16 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	init_node(stat_node *node, s_stat *data, char *m, char *u, char *g)
{
	node->stat_info = data;
	node->sname = m;
	node->uname = u;
	node->gname = g;
	node->next = NULL;
}
