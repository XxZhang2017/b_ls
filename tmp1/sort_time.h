#ifndef SORT_TIME
# define SORT_TIME

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <sys/dir.h>

typedef	struct stat	stat_;
typedef	struct dirent	dirent;

typedef		struct stat_node
{
	stat_	*st_info;
	char	*sname;
	long	tm;
	struct stat_node	*next;
}			stat_node;

typedef		struct st_list
{
	stat_node	*head;
	stat_node	*tail;
	int			count;
}			st_list;

typedef		long (*CMP_TIME)(long, long);

stat_node	*init_st_node(char *s, stat_ *sn);
st_list		*init_st_list(stat_node *sn);
st_list		*append_st_node(st_list *sl, char *s, stat_ *sn); 

void	get_stat_info(char *dn);
void	sort_by_time(stat_node *sn, CMP_TIME, int len);



int		free_st_node(stat_node *sn);
void	free_st_list(st_list *sl);

void	plist(st_list *sl);
#endif
