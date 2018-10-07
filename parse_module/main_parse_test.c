#include "libft_test.h"

int	main(int argc, char **argv)
{
	param *pa;
	pa = (param *)malloc(sizeof(param));

	if (parsing(argc, argv, pa))
	{
		free();
		display_param(pa);
		return (0);
	}
	else
	{	
		printf("parsing error\n");
		exit (0);
	}
}
