#include "test.h"

int	main(int argc, char **argv)
{
	param *p;

	p = init_param();	
	parsing(argc, argv, p);

	if(p->fg & LS_a)
		printf("-a\n");
	if(p->fg & LS_l)
		printf("-l\n");
	if (p->fg & LS_t)
		printf("-t\n");
	if (p->fg & LS_r)
		printf("-r\n");

	printf("file name %s\n", p->pdname);
	return (0);
}
