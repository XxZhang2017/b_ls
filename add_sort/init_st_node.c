#include "sort_time.h"

stat_node	*init_st_node(char *s, stat_ *st)
{
	stat_node	*sn;
	
	sn = (stat_node *)malloc(sizeof(stat_));
	sn->sname = strdup(s);
	sn->st_info = st;
	sn->tm = (long)rand();
	sn->next = NULL;

	return (sn);
}
