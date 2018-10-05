#include "sort_time.h"

void	plist(st_list *sl)
{
	printf("-------------------\n");
	stat_node	*tmp;

	tmp = sl->head;

	while (tmp)
	{
		printf("%s\n", tmp->sname);
		tmp = tmp->next;
	}
//	printf("\n");
	
}
