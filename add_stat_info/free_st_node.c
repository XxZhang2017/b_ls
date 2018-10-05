#include "sort_time.h"

int	free_st_node(stat_node *sn)
{
	if (sn->sname)
		free(sn->sname);
	if (sn->st_info)
		free(sn->st_info);
	return (0);
}
