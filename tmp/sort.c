
#include "sort.h"

void	sort(st_node *sn, int (*CMP)(long, long), int len)
{
	int i;
	int	j;
	int	flag;
	st_node	*pre;
	st_node *tmp;
	st_node	*head;

	head = sn;
	pre = NULL;
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
				if (CMP(sn->data, sn->next->data) > 0 )
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
}


						






