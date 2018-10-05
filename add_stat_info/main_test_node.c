#include "sort_time.h"

int	main(int ac, char **av)
{
	st_list *mylist;
//	stat_node	*sn;
	if (ac < 2)
	{
		printf("should be 2 args\n");
		exit(1);
	}
	mylist = init_st_list(NULL);
	get_stat_info(mylist, av[1]);		
//	stat_ *s;
//	s = NULL;
//	sn = init_st_node("first_node", s);
//	mylist = init_st_list(sn);
//	mylist = append_st_node(mylist, "second_node", s);


/*	printf("list info ---- :\n");
	printf("head is %s \n", mylist->head->sname);
	printf("the list is ===========  \n");
	plist(mylist);
	printf("the total node is %d\n", mylist->count);
	printf("the tail is %s \n", mylist->tail->sname);
*/
	free_st_list(mylist);
	
	sleep(60);
	
	return (0);
}

