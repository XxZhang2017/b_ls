#include "libft.h"
stat_dlist *appendnode(stat_dlist *dlist, s_stat *data, char *name, char *usr, char *gname)
{
	printf("in stat_dlist\n");
	if (dlist == NULL)
	{
		stat_dlist *dlist;
		stat_node *tmp = (stat_node *)malloc(sizeof(stat_node));
		
		init_node(tmp, data, name, usr, gname);

		dlist = init_dlist();
		dlist->head = tmp;
		dlist->tail = tmp;
		tmp->next = NULL;
		(dlist->count)++;
		updatelen(&dlist->maxlen, strlen(tmp->sname));
	}
	else if (dlist->head == NULL && dlist->tail == NULL)
	{
		stat_node *tmp = (stat_node *)malloc(sizeof(stat_node));
		
		init_node(tmp, data, name, usr, gname);
		
		dlist->head = tmp;
		dlist->tail = tmp;
		updatelen(&dlist->maxlen, strlen(tmp->sname));
	}
	else
	{
		stat_node *ptr = (stat_node *)malloc(sizeof(stat_node));

		init_node(ptr, data, name, usr, gname);

		dlist->tail->next = ptr;
		dlist->tail = ptr;
		updatelen(&dlist->maxlen, strlen(ptr->sname));
	}
	return (dlist);
}
