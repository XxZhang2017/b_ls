/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list_sort_a.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 21:44:53 by xinzhang          #+#    #+#             */
/*   Updated: 2018/09/26 14:35:23 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	sort_list(stat_dlist *l)
{
	stat_node	*sn;
	stat_node	*tmp;

	stat_node	*pre;
	
	int		flag;
	flag = 0;

	int	len = l->count;
	while (len > 0)
	{
		pre = NULL;
		sn = l->head;
		while ( sn != NULL && sn->next != NULL)
		{
			if (strcmp(sn->sname, sn->next->sname) > 0)
			{
				flag = 1;
				if (pre == NULL)
				{
					tmp = sn->next;
					sn->next = sn->next->next;
					tmp->next = sn;
					l->head = tmp;
				}
				else
				{
					tmp = sn->next;
					pre->next = sn->next;
					sn->next = sn->next->next;
					tmp->next = sn;
				}
			}
			pre = sn;
			sn = sn->next;
		}
		if (!flag)
			break;
		len--;
	}		
}
