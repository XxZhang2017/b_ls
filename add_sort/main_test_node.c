#include "sort_time.h"

int	mt_sort(long t1, long t2)
{
	return (t1 - t2);
}
int	main()
{
	st_list *mylist;
	stat_node	*sn;
	
	stat_ *s;
	s = NULL;
	sn = init_st_node("first_node", s);
	mylist = init_st_list(sn);
	mylist = append_st_node(mylist, "second_node", s);
	
	int i = 10;
	int ch = 65;
	char	*c;
	while (i > 0)
	{
		c = (char *)malloc(sizeof(char));
		*c = (char)(ch + i);
		mylist = append_st_node(mylist,c, s);
		i--;
	}	

/*	printf("list info ---- :\n");
	printf("head is %s \n", mylist->head->sname);
	printf("the list is ===========  \n");
	plist(mylist);
	printf("the total node is %d\n", mylist->count);
	printf("the tail is %s \n", mylist->tail->sname);
*/
	printf("before sorting\n");
	plist(mylist);
	sort_by_time(mylist, mylist->head, mt_sort, mylist->count);

	printf("after sorting\n");
	plist(mylist);
	
	
	free_st_list(mylist);
	
//	sleep(60);
	
	return (0);
}

