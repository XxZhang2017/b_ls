/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 20:40:12 by xinzhang          #+#    #+#             */
/*   Updated: 2018/10/03 20:52:17 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*int sort_mtime(time_t t1, time_t t2)
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
*/
int main(int argc, char **argv)
{
	param *pa;

	stat_dlist *dl;
	stat_node *stn;
	
	pa = init_param();
	dl = init_dlist(pa);
	parsing(argc, argv, dl->pa);


/*	if(dl->pa->fg & LS_a)
		printf("-a\n");
	if(dl->pa->fg & LS_l)
		printf("-l\n");
	if (dl->pa->fg & LS_t)
		printf("-t\n");
	if (dl->pa->fg & LS_r)
		printf("-r\n");
*/
/*	printf("%s\n", dl->pa->pdname);
	if (dl->pa->pdname == NULL)
	{
		dl->pa->pdname = strdup(".");
		printf("file name %s\n", dl->pa->pdname);
	}*/


//	stat_info(dl, "/nfs/2018/x/xinzhang/mylocation/cadet_exe");
	stat_info(dl, dl->pa->pdname);

/*	sort_list(dl, sorted);
	
	printf("sort from small to large\n");
	printdlist_a(dl);
    printf("-------------------\n");
    sort_list(dl, re_sorted);
    printf("sort from large to small\n");
    printdlist_a(dl);
*/
	stn = dl->head;
	while (stn)
	{
//		print_type(stn, dl->pa);
//		print_stats(stn, dl->pa);
		print_time(stn, dl->pa);
		print_name(stn, dl);
		stn = stn->next;
	}
//	display_condition(dl);
	return (0);
}
