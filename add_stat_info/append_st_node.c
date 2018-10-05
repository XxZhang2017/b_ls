#include "sort_time.h"

st_list	*append_st_node(st_list *sl, char *s, stat_ *sn)
{
	stat_node *node;

//	printf("appending nodes\n");
	if ((node = init_st_node(s, sn)) != NULL)
	{
		if (!(sl->head) && !(sl->tail))
		{
			sl->head = node;
			sl->tail = node;
			sl->count = 1;
		}
		else
		{
			sl->tail->next = node;
			sl->tail = sl->tail->next;
			sl->count++;
		}
		return (sl);
	}
	else
	{
//		printf("appending failed");
		return (sl);
	}
}
