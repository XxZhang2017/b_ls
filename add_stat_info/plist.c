#include "sort_time.h"

void	plist(st_list *sl)
{
	printf("---------print the list---------\n");
	stat_node	*tmp;
	struct tm	*mytime;
	char buff[30];

	tmp = sl->head;

	while (tmp)
	{
		mytime = localtime(&(tmp->st_info->st_mtimespec.tv_sec));
		strftime(buff, 30, "%b %d %H:%M", mytime);
		printf("%s   %s\n", buff, tmp->sname);	
		tmp = tmp->next;
	}
//	printf("\n");
	
}
