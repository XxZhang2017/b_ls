#include "sort_time.h"

st_list	*append_st_node(st_list *sl, char *s, stat_ *sn)
{
	stat_node *node;

	if ((node = init_st_node(s, sn)) != NULL)
	{
		sl->tail->next = node;
		sl->tail = sl->tail->next;
		sl->count++;
		return (sl);
	}
	else
	{
		printf("appending failed");
		return (sl);
	}
}
