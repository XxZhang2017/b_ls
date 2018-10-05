/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list_sort_a.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 21:44:53 by xinzhang          #+#    #+#             */
/*   Updated: 2018/10/04 21:39:05 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*int sorted(char *a, char *b)
{
    return strcmp(a, b);
}

int re_sorted(char *a, char *b)
{
    return (-strcmp(a, b));
}
*/
void	sort_list_order(stat_dlist *dl, stat_node *sn, SORT_PTR sort, int len)
{
	stat_node	*tmp;
	stat_node	*head;
	stat_node	*pre;
	
	int		flag;
	int	i;
   
	head = sn;
	i = len - 1;
	if (len >= 2)
	{
		while (i > 0)
		{
			pre = NULL;
			sn = head;
			while (sn && sn->next)
			{
				flag = 0;
//				printf("----------------------------------------\n");
//				display(head);
				if (sort(sn->sname, sn->next->sname) > 0)
				{
					flag = 1;
					if (pre == NULL)
					{
						tmp = sn->next;
						sn->next = sn->next->next;
						tmp->next = sn;
						head = tmp;
						pre = head;
					}
					else
					{
						tmp = sn->next;
						pre->next = sn->next;
						sn->next = sn->next->next;
						tmp->next = sn;
						pre = pre->next;
					}
				}
				if (!flag)
				{
					pre = sn;
					sn = sn->next;
				}
			}
			i--;
		}		
	}
	dl->head = head;
}
