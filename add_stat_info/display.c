#include "sort_time.h"

void	display(stat_node *sn)
{
	struct tm	*mytime;
	char buff[30];
	printf("------------------ display each node ---------------\n");
	while (sn)
	{
		mytime = localtime(&(sn->st_info->st_mtimespec.tv_sec));
		strftime(buff, 30, "%b %d %H:%M", mytime);
		printf("%s   %s\n", buff, sn->sname);
		sn = sn->next;
	}
}
