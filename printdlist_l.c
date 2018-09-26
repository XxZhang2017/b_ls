/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printdlist_l.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 15:53:00 by xinzhang          #+#    #+#             */
/*   Updated: 2018/09/25 20:39:12 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void printdlist_l(stat_dlist *dl)
{
	stat_node *tmp;
	tmp = dl->head;
	printf("total ");
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
			printf("%s\n", tmp->sname);
		}
		tmp = tmp->next;
	}
	}
}
