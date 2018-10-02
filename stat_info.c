/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stat_info.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 21:56:06 by xinzhang          #+#    #+#             */
<<<<<<< Updated upstream
/*   Updated: 2018/09/26 23:05:32 by xinzhang         ###   ########.fr       */
=======
/*   Updated: 2018/09/30 15:20:00 by xinzhang         ###   ########.fr       */
>>>>>>> Stashed changes
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
 
//	infoptr = (s_stat **)malloc(sizeof(s_stat *));
//	*infoptr = (s_stat *)malloc(sizeof(s_stat));
	d = opendir(fn);
	if (d)
	{
	while ((dir = readdir(d)) != NULL)
	{
		infoptr = (s_stat *)malloc(sizeof(struct stat));
		
		dname = strdup(dir->d_name);
		lstat(dir->d_name, infoptr);
		psd = getpwuid(infoptr->st_uid);
		usrname = strdup(psd->pw_name);
		grp = getgrgid(infoptr->st_gid);
		gname = strdup(grp->gr_name);

		dlist = appendnode(dlist, infoptr, dname, usrname, gname);
		printf("the file block size is %lld\n", infoptr->st_blocks);
		if (!strcmp(dname,"."))
			dlist->pa->fg & LS_l ? dlist->totalsize += infoptr->st_blocks: dlist->totalsize;
		else if (!strcmp(dname, ".."))
			dlist->pa->fg & LS_l ? dlist->totalsize += infoptr->st_blocks: dlist->totalsize;
		else
			dlist->pa->fg & LS_l ? dlist->totalsize += infoptr->st_blocks: dlist->totalsize;
	
	}
	closedir(d);
	}
}
