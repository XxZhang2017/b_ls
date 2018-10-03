#include "libft.h"
int main()
{
	stat_dlist *dl;

	dl = init_dlist();

//	stat_info(dl, "/nfs/2018/x/xinzhang/mylocation/cadet_exe");
	stat_info(dl, ".");


//	printdlist_a(dl);
/*	sort_list(dl, sorted);
	
	printf("sort from small to large\n");
	printdlist_a(dl);
    printf("-------------------\n");
    sort_list(dl, re_sorted);
    printf("sort from large to small\n");
    printdlist_a(dl);
*/
//	printdlist_l(dl);



//	display_condition(dl);

	return (0);
}
