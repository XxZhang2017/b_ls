
#include "sort_time.h"

void	sort_by_time(st_list *sl, stat_node *sn, CMP_TIME cp, int len)
{
	int i;
	int	j;
	int	flag;
	stat_node	*pre;
	stat_node *tmp;
	stat_node	*head;

	head = sn;
	i = len - 1;
	if (len >= 2)
	{
		while (i > 0)
		{
			sn = head;
			pre = NULL;
			while (sn && sn->next)
			{
				flag = 0;

				if (cp(sn->st_info->st_mtimespec, sn->next->st_info->st_mtimespec) < 0 )
				{
					flag = 1;
					if (pre == NULL)
					{
						tmp = sn->next;
						sn->next = sn->next->next;
						tmp->next = sn;
						head = tmp;
						pre = head;
					}
					else
					{
						pre->next = sn->next;
						tmp = sn->next;
						sn->next = sn->next->next;
						tmp->next = sn;
						pre = pre->next;
					}

				}
				if (!flag)
				{
					pre = sn;
					sn = sn->next;
				}
			}
			i--;
		}
	}
	sl->head = head;
}
