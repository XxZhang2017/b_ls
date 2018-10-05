#include "sort_time.h"

st_list	*init_st_list(stat_node *sn)
{
	st_list	*sl;

	sl = (st_list *)malloc(sizeof(st_list));
	sl->head = sn;
	sl->tail = sn;
	sl->count = sn == NULL ? 0 : 1;
	return (sl);
}
