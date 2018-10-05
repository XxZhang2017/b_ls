#include "sort_time.h"

void	free_st_list(st_list *sl)
{
	stat_node	*cur;
	stat_node	*next_;
	
	if (sl->head)
	{
	
		cur = sl->head;
		next_ = cur->next;
		while (cur && next_)
		{
			if (!free_st_node(cur))
			{
				cur = next_;
				next_ = next_->next;
			}
			else
			{
				printf("free list not success\n");
				break;
			}
		}
		if (cur)
			free_st_node(cur);
	}
}

