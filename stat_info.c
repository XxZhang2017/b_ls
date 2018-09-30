/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stat_info.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 21:56:06 by xinzhang          #+#    #+#             */
/*   Updated: 2018/09/29 23:35:25 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void stat_info(stat_dlist *dlist, char *fn)
{
//	printf("in stat_info\n");
	DIR *d;
	struct dirent *dir;
	s_stat *infoptr;
	char *dname;
	s_passwd	*psd;
	s_group		*grp;
	char *usrname;
	char *gname;
	char path[200];
 
	d = opendir(fn);
//	strcpy(path, fn);
//	strcat(path, "/");
	if (d)
	{
	while ((dir = readdir(d)) != NULL)
	{
		strcpy(path,fn);
		strcat(path, "/");
		infoptr = (s_stat *)malloc(sizeof(struct stat));
		
		dname = strdup(dir->d_name);
		
		lstat(strcat(path,dname), infoptr);
//		printf("%s m time %ld\n", path, infoptr->st_mtime);
		psd = getpwuid(infoptr->st_uid);
		usrname = strdup(psd->pw_name);
		grp = getgrgid(infoptr->st_gid);
		gname = strdup(grp->gr_name);

		dlist = appendnode(dlist, infoptr, dname, usrname, gname);
		dlist->totalsize += infoptr->st_blocks;
	}
	closedir(d);
	}
}
