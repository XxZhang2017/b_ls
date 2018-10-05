#include "sort_time.h"

void	get_stat_info(st_list *mylist, char *fn)
{
	DIR	*d;
	struct dirent	*dir;
	stat_	*s_info;
	char	*dname;
	char	path[255];

	d = opendir(fn);
	if (d)
	{
		while ((dir = readdir(d)) != NULL)
		{

			strcpy(path, fn);
			strcat(path, "/");
			s_info = (stat_ *)malloc(sizeof(stat_));
			dname = strdup(dir->d_name);
			lstat(strcat(path, dname), s_info);
			mylist = append_st_node(mylist, dname, s_info);
			free(dname);
//			plist(mylist);
		}
		closedir(d);
	}
}
