#include "sort_time.h"

void	plist(st_list *sl)
{
	stat_node	*tmp;

	tmp = sl->head;

	while (tmp)
	{
		printf("the time %ld, %s   \n", tmp->tm, tmp->sname);
		tmp = tmp->next;
	}
}
