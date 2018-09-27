#include "libft.h"

int main(int argc, char **argv)
{
	stat_dlist *dl;

	ls_flag *fg;
//	dl = init_dlist();
	fg = initflag();

	parse_flag(argc, argv, fg);
	printf("the flag is %d, %d, %d, %d, %d\n", fg->l, fg->a, fg->t, fg->r, fg->error);

//	stat_info(dl, "/nfs/2018/x/xinzhang/mylocation/cadet_exe");
//	stat_info(dl, ".");

//	printdlist_a(dl);
//	printdlist_l(dl);
	return (0);
}
