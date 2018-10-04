#include "sort.h"

void	display(st_node *sn)
{
	while (sn)
	{
		printf("%ld\n", sn->data);
		sn = sn->next;
	}
}
