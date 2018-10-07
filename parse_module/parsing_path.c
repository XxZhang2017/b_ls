#include "libft_test.h"

int	parsing_path(char *av, param *p)
{

	if (((p->pf).p_mode = get_mode(av)) != 1)
	{
		printf("lstat failed, path %s specified by user is not valid \n", av);
		return (1);
	}
	(p->pf).pdname = strdup(av);
	return (0);
}
