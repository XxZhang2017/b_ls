/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   condition.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 10:46:23 by xinzhang          #+#    #+#             */
/*   Updated: 2018/09/30 11:14:54 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int sort_mtime(time_t t1, time_t t2)
{
    return (t1 - t2);
}

int re_sort_mtime(time_t t1, time_t t2)
{
    return (t2 - t1);
}

int sorted(char *a, char *b)
{
    return strcmp(a, b);
}

int re_sorted(char *a, char *b)
{
    return (-strcmp(a, b));
}

void	display_condition(stat_dlist *dl)
{
	static void	(*f1)(stat_dlist *, SORT_PTR);
	static void	(*f2)(stat_dlist *, TIME_PTR);
	static void	(*f3)(stat_dlist *, TIME_PTR, SORT_PTR);

	if (dl->pa->error == 1)
		printf("error\n");
	else if (dl->pa->isfn == 0)
		strcpy(dl->pa->pdname, ".");
	else if (dl->pa->fg & LS_l)
	{
		if (dl->pa->fg & LS_t )
		{
			if (dl->pa->fg & LS_r)
			{
				sort_list_time(dl, sort_mtime);
				sort_list_time_order(dl, sort_mtime, sorted);
				printdlist_l(dl);
			}
		}
		else if (dl->pa->fg & LS_r)
		{
			sort_list_order(dl, re_sorted);
			printdlist_l(dl);
		}
		else
		{
			sort_list_order(dl, sorted);
			printdlist_l(dl);
		}
	}
	else
	{
		if (dl->pa->fg & LS_t )
		{
			if (dl->pa->fg & LS_r)
			{
				sort_list_time(dl, sort_mtime);
				sort_list_time_order(dl, sort_mtime, sorted);
				printdlist_a(dl);
			}
		}
		else if (dl->pa->fg & LS_r)
		{
			sort_list_order(dl, re_sorted);
			printdlist_a(dl);
		}
		else
		{
			sort_list_order(dl, sorted);
			printdlist_a(dl);
		}
	}
}
