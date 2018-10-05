/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printdlist_l.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 15:53:00 by xinzhang          #+#    #+#             */
/*   Updated: 2018/10/04 14:21:52 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void printdlist_l(stat_dlist *dl)
{
	stat_node *tmp;
	tm	*mytime;
	char buff[30];
	
	tmp = dl->head;
	printf("total %lu\n", dl->totalsize);

	printf("\n");
	printf("will  print more\n");
	if (!dl) printf("dl is null\n");
	if (!(dl->head)) printf("dl->head null\n");
	if(dl && dl->head)
	{
	while (tmp != NULL)
	{
		if(tmp->sname[0] != '.')
		{
			printf((tmp->stat_info->st_mode & S_IRUSR) ? "r" : "-");
			printf((tmp->stat_info->st_mode & S_IWUSR) ? "w" : "-");
			printf((tmp->stat_info->st_mode & S_IXUSR) ? "x" : "-");
			printf((tmp->stat_info->st_mode & S_IRGRP) ? "r" : "-");
			printf((tmp->stat_info->st_mode & S_IWGRP) ? "w" : "-");
			printf((tmp->stat_info->st_mode & S_IXGRP) ? "x" : "-");
			printf((tmp->stat_info->st_mode & S_IROTH) ? "r" : "-");
			printf((tmp->stat_info->st_mode & S_IWOTH) ? "w" : "-");
			printf((tmp->stat_info->st_mode & S_IXOTH) ? "x" : "-");
			printf("  ");
			printf("%d ", tmp->stat_info->st_nlink); 	
			
			printf("%s  ", tmp->uname);
			printf("%s   ", tmp->gname);
			printf("%llu ", tmp->stat_info->st_size); 
			mytime = localtime(&(tmp->stat_info->st_mtimespec.tv_sec));
			strftime(buff, 30, "%b %d %H:%M", mytime);
			printf("%s  ", buff);     
			printf("%s\n", tmp->sname);
		}
		tmp = tmp->next;
	}
	}
}
