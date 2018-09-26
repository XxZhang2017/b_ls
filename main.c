#include "libft.h"
int main()
{
  stat_dlist *dl;

//  dl = (stat_dlist *)malloc(sizeof(stat_dlist));
//  dl->head = (stat_node *)malloc(sizeof(stat_node));
//  dl->tail = NULL;
//  dl->head = NULL;
//  dl->count = 0;
//  dl->head->stat_info = (s_stat *)malloc(sizeof(s_stat));
//  dl->head->next = NULL;
  
	dl = init_dlist();
	stat_info(dl, ".");
//	stat_info(dl,"/nfs/2018/x/xinzhang/mylocation/cadet/b_libft1");
//	printdlist_a(dl);
  printdlist_l(dl);
	return (0);
}
