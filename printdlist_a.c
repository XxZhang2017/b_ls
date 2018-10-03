#include "libft.h"

void printdlist_a(stat_dlist *dl)
{
	stat_node *tmp;
	int	count;

	tmp = dl->head;
	if(dl != NULL || dl->head != NULL)
	{
	while (tmp != NULL)
	{
		count = 1;
		while (tmp != NULL && count <= 4)
		{
			printf("%-*s",dl->maxlen, tmp->sname);
			tmp = tmp->next;
			count++;
		}
			printf("\n");
	}
	}
}
