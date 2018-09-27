#include "libft.h"
int main()
{
	stat_dlist *dl;

	dl = init_dlist();

//	stat_info(dl, "/nfs/2018/x/xinzhang/mylocation/cadet_exe");
	stat_info(dl, ".");

//	printdlist_a(dl);
	printdlist_l(dl);
	return (0);
}
