#include "libft.h"

int main(int argc, char **argv)
{
	param *pa;

	stat_dlist *dl;
	
	pa = init_param();
	dl = init_dlist(pa);
	parsing(argc, argv, dl->pa);


	if(dl->pa->fg & LS_a)
		printf("-a\n");
	if(dl->pa->fg & LS_l)
		printf("-l\n");
	if (dl->pa->fg & LS_t)
		printf("-t\n");
	if (dl->pa->fg & LS_r)
		printf("-r\n");

	printf("file name %s\n", dl->pa->pdname);
//	stat_info(dl, "/nfs/2018/x/xinzhang/mylocation/cadet_exe");
//	stat_info(dl, ".");

//	printdlist_a(dl);
//	printdlist_l(dl);
	return (0);
}
