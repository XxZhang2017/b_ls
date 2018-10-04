#include "sort.h"

st_node	*new_sn(long data)
{
	st_node	*sn = (st_node *)malloc(sizeof(st_node));
	sn->data = data;
	sn->next = NULL;
	return (sn);

}
