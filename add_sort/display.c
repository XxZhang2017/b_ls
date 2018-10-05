#include "sort_time.h"

void	display(stat_node *sn)
{
	while (sn)
	{
		printf("%ld   %s\n", sn->tm, sn->sname);
		sn = sn->next;
	}
}
