#ifndef LIBFT_H
# define LIBFT_H

# include <sys/stat.h>
# include <dirent.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <sys/stat.h>

typedef	struct stat	s_stat;

typedef			struct stat_node
{
 s_stat			*stat_info;
 char			*sname;
 struct stat_node	*next;
}			stat_node;

typedef			struct stat_dlist
{
 stat_node		*head;
 stat_node		*tail;
}			stat_dlist;

stat_dlist	*appendnode(stat_dlist *dlist, s_stat *data, char *c);
stat_dlist	getnext(stat_dlist);
stat_dlist	deletenode(stat_dlist *dlist);
void		stat_info(stat_dlist *dlist, char *fn);
void		printdlist(stat_dlist *dl);

#endif
