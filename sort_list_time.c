/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list_sort_a.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 21:44:53 by xinzhang          #+#    #+#             */
/*   Updated: 2018/10/04 21:49:05 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*int sort_mtime(time_t t1, time_t t2)
{
    return (t1 - t2);
}

int re_sort_mtime(time_t t1, time_t t2)
{
    return (t2 - t1);
}
*/
void	sort_list_time(stat_dlist *dl, stat_node *sn, TIME_PTR t, int len)
{
	stat_node	*tmp;
	stat_node	*pre;
	stat_node	*head;
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
//				printf("-----------------------\n");
//				display(head);
				flag = 0;
				if (t(sn->stat_info->st_mtimespec.tv_sec,  
						sn->next->stat_info->st_mtimespec.tv_sec) > 0)
				{
					flag = 1;
					if (pre == NULL)
					{
//						printf("switch %ld  %s,  %ld  %s,\n",			 
//								sn->stat_info->st_mtimespec.tv_nsec,
//								sn->sname,						
//								(sn->next->stat_info->st_mtimespec).tv_nsec,
//								sn->next->next->sname);						
								tmp = sn->next;								
						sn->next = sn->next->next;								
						tmp->next = sn;
						head = tmp;
						pre = head;
					}
					else
					{
//				printf("switch %ld  %s,  %ld  %s,\n",			 
//						sn->stat_info->st_mtimespec.tv_nsec,  
//						sn->sname,
//						(sn->next->stat_info->st_mtimespec).tv_nsec,  
//						sn->next->next->sname);
				
						pre->next = sn->next; 		
							tmp = sn->next;	
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
