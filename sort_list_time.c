/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list_sort_a.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 21:44:53 by xinzhang          #+#    #+#             */
/*   Updated: 2018/09/30 10:23:33 by xinzhang         ###   ########.fr       */
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
void	sort_list_time(stat_dlist *l, TIME_PTR t)
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
//			printf("%s, signed %ld, unsigned %ld\n", sn->sname,sn->stat_info->st_mtime, sn->next->stat_info->st_mtime);
		
			if (t(sn->stat_info->st_mtimespec.tv_sec,  
						sn->next->stat_info->st_mtimespec.tv_sec) < 0)
			{
//			printf("signed %ld, unsigned %lu\n", sn->stat_info->st_mtime - sn->next->stat_info->st_mtime,sn->stat_info->st_mtime - sn->next->stat_info->st_mtime); 	
//		mytime = localtime(&(tmp->stat_info->st_mtime));
//			strftime(buff, 30, "%b %d %H:%M", mytime);
			
				printf("%s, signed %ld, %s , signed %ld\n", sn->sname,sn->stat_info->st_mtimespec.tv_sec, sn->next->sname, sn->next->stat_info->st_mtimespec.tv_sec);
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
