/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printdlist_l.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 15:53:00 by xinzhang          #+#    #+#             */
/*   Updated: 2018/09/29 16:13:36 by xinzhang         ###   ########.fr       */
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
	if(dl != NULL || dl->head != NULL)
	{
	while (tmp != NULL)
	{
		if(tmp->sname[0] != '.')
		{
			printf((S_ISDIR(tmp->stat_info->st_mode)) ? "d" : "-");
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
			printf("%llu ", tmp->stat_info->st_size); 
			printf("%s  ", tmp->uname);
			printf("%s   ", tmp->gname);
			mytime = localtime(&(tmp->stat_info->st_atime));
			strftime(buff, 30, "%b %d %H:%M", mytime);
			printf("%s  ", buff);     
			printf("%s\n", tmp->sname);
		}
		tmp = tmp->next;
	}
	}
}
