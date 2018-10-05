#include "sort_time.h"

void	plist(st_list *sl)
{
	stat_node	*tmp;

	tmp = sl->head;

	while (tmp)
	{
		printf("%s   ", tmp->sname);
		tmp = tmp->next;
	}
	printf("\n");
	
}
