/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_permission.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 22:07:50 by xinzhang          #+#    #+#             */
/*   Updated: 2018/10/02 23:33:42 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_type(stat_node *n, param *pa)
{
//	printf("print type\n");
	if (pa->fg & LS_a)
	{
//		printf("the flag %d\n", pa->fg & LS_a);	
		printf((n->stat_info->st_mode & S_IFDIR) ? "d" : "");
		printf((n->stat_info->st_mode & S_IFIFO) ? "f" : "");
		printf((n->stat_info->st_mode & S_IFLNK) ? "l" : "");
		printf((n->stat_info->st_mode & S_IFBLK) ? "b" : "");
		printf((n->stat_info->st_mode & S_IFCHR) ? "c" : "");
		printf((n->stat_info->st_mode & S_IFSOCK) ? "s" : "");
		printf((n->stat_info->st_mode & S_IFREG) ? "-" : "");
//		printf("\n");
	}
	else
	{
	
		if (strcmp(n->sname, ".") && strcmp(n->sname, ".."))
		{
			printf(((n->stat_info->st_mode & S_IFMT)== S_IFDIR) ? "d" : "");
			printf(((n->stat_info->st_mode & S_IFMT) == S_IFIFO) ? "f" : "");
			printf(((n->stat_info->st_mode & S_IFMT) == S_IFLNK) ? "l" : "");
			printf(((n->stat_info->st_mode & S_IFMT) == S_IFBLK) ? "b" : "");
			printf(((n->stat_info->st_mode & S_IFMT) == S_IFCHR) ? "c" : "");
			printf(((n->stat_info->st_mode & S_IFMT) == S_IFSOCK) ? "s" : "");
			printf(((n->stat_info->st_mode & S_IFMT) == S_IFREG) ? "-" : "");
//			printf("\n");
		}
	}
}
