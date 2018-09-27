#ifndef LIBFT_H
# define LIBFT_H

# include <sys/stat.h>
# include <dirent.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <sys/types.h>
# include <pwd.h>
# include <grp.h>
# include <time.h>

typedef	struct stat			s_stat;
typedef struct passwd		s_passwd;
typedef struct group		s_group;
typedef	struct tm			tm;

typedef			struct stat_node
{
 s_stat			*stat_info;
 char			*sname;
 char			*uname;
 char			*gname;
 
 unsigned int			fsize;

 struct stat_node	*next;
}			stat_node;

typedef			struct stat_dlist
{
 stat_node		*head;
 stat_node		*tail;
 unsigned int			maxlen;
 int			count;
 unsigned long	totalsize;
}			stat_dlist;

void		init_node(stat_node *n, s_stat *data, char *m, char *u, char *g);
stat_dlist	*init_dlist();

stat_dlist	*appendnode(stat_dlist *dlist, s_stat *data, char *c, char *u, char *g);

stat_dlist	deletenode(stat_dlist *dlist);

void		stat_info(stat_dlist *dlist, char *fn);
void		printdlist_a(stat_dlist *dl);
void		printdlist_l(stat_dlist *dl);



void		updatelen(unsigned int *a, unsigned int b);




stat_dlist	getnodeinfo(stat_dlist *a, int c);
void		printnode(stat_node *a);


void		sort_list(stat_dlist *l);
#endif
