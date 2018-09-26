/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stat_info.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 21:56:06 by xinzhang          #+#    #+#             */
/*   Updated: 2018/09/25 20:36:58 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void stat_info(stat_dlist *dlist, char *fn)
{
	printf("in stat_info\n");
	DIR *d;
	struct dirent *dir;
	stat_dlist sdlist;
	s_stat **infoptr;
	char *dname;
	s_passwd	*psd;
	s_group		*grp;
	char *usrname;
	char *gname;
 
	infoptr = (s_stat **)malloc(sizeof(s_stat *));
	*infoptr = (s_stat *)malloc(sizeof(s_stat));
	d = opendir(fn);
	if (d)
	{
		printf("can open dir\n");
	while ((dir = readdir(d)) != NULL)
	{
		*infoptr = (s_stat *)malloc(sizeof(struct stat));
		printf("malloc to s_stat\n");
		dname = strdup(dir->d_name);
		stat(dir->d_name, *infoptr);
		printf("get stat info\n");
		psd = getpwuid((*infoptr)->st_uid);
		printf("get u-name info\n");
		usrname = strdup(psd->pw_name);
		grp = getgrgid((*infoptr)->st_gid);
		printf("get g-name info\n");
		gname = strdup(grp->gr_name);
		printf("copy gid info\n");
//      printf("the name %s\n", dir->d_name);
		dlist = appendnode(dlist, *infoptr, dname, usrname, gname);
	}
	closedir(d);
	}
}
