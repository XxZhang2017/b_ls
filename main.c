#include "libft.h"

long sort_mtime(long t1, long t2)
{
    return (t1 - t2);
}

long re_sort_mtime(long t1, long t2)
{
    return (t2 - t1);
}

int sorted(char *a, char *b)
{   
    return strcmp(a, b);
}

int re_sorted(char *a, char *b)
{   
    return (-strcmp(a, b));
}

int main(int argc, char **argv)
{
	param *pa;

	stat_dlist *dl;
	
	pa = init_param();
	dl = init_dlist(pa);
	parsing(argc, argv, dl->pa);

	static void	(*f1)(stat_dlist *, SORT_PTR);
	static void	(*f2)(stat_dlist *, TIME_PTR);
	static void	(*f3)(stat_dlist *, TIME_PTR, SORT_PTR);
/*	if(dl->pa->fg & LS_a)
		printf("-a\n");
	if(dl->pa->fg & LS_l)
		printf("-l\n");
	if (dl->pa->fg & LS_t)
		printf("-t\n");
	if (dl->pa->fg & LS_r)
		printf("-r\n");
*/
/*	printf("%s\n", dl->pa->pdname);
	if (dl->pa->pdname == NULL)
	{
		dl->pa->pdname = strdup(".");
		printf("file name %s\n", dl->pa->pdname);
	}*/


//	stat_info(dl, "/nfs/2018/x/xinzhang/mylocation/cadet_exe");
	stat_info(dl, dl->pa->pdname);

/*	sort_list(dl, sorted);
	
	printf("sort from small to large\n");
	printdlist_a(dl);
    printf("-------------------\n");
    sort_list(dl, re_sorted);
    printf("sort from large to small\n");
    printdlist_a(dl);
*/
	
//	printf("---------------sorting by character only\n");
//	sort_list_order(dl->head, sorted, dl->count);  
// 	display(dl->head);	

	printf("--------------- sorting by time only\n");
   	sort_list_time(dl->head, sort_mtime, dl->count);
	display(dl->head);
//		printf("--------------- sorting by time and character order\n");	
//	sort_list_time_order(dl, sort_mtime, sorted);
//		printdlist_l(dl);



	return (0);
}
