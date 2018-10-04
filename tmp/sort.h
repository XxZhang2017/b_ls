#ifndef SORT
# define SORT

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef	struct st_node
{
	long	data;
	struct st_node	*next;
}			st_node;

//typedef		int (*CMP)(long, long);

void	sort(st_node *sn, int (*CMP)(long, long), int len);
void	display(st_node *sn);

st_node	*new_sn(long s);

#endif
