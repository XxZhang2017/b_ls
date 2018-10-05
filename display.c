#include "libft.h"

void	display(stat_node *sn)
{
	printf("-----------------------display list\n");
	while (sn)
	{
		printf("%ld               ", sn->stat_info->st_mtimespec.tv_nsec);
		printf("%s\n", sn->sname);
		sn = sn->next;
	}
}
