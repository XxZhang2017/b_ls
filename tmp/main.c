#include "sort.h"

int	sorted(long l, long s)
{
	return (l - s);
}

int	main()
{
	st_node	*sn;

	sn = new_sn(4);
	sn->next = new_sn(34);
	sn->next->next = new_sn(36);
	sn->next->next->next = new_sn(34);
	sn->next->next->next->next = new_sn(9);

//	printf("before sorting\n");
//	display(sn);
//	printf("after sorting\n");
	sort(sn,sorted,5);
//	display(sn);
	return (0);
}

