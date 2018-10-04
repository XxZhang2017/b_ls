#include "libft_test.h"

int	main(int argc, char **argv)
{
	param *pa;

//init param return a param pointer;
	pa = init_param();
	if (parsing(argc, argv, pa))
	{
		printf("the parsing info:\n");
		printf("the path name: %s \n", pa->pdname);
		printf(pa->isfn == ISFILE ? "file\n" : "directory\n");
		printf("the option\n");
		printf(pa->fg & LS_a ? "-a  " : "");
		printf(pa->fg & LS_l ? "-l  " : "");
		printf(pa->fg & LS_t ? "-t  " : "");
		printf(pa->fg & LS_r ? "-r  " : "");
	}
	else
		printf("parsing not successful. The program should exit.\n");
	return (0);
}
