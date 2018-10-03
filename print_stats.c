/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stats.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 19:56:31 by xinzhang          #+#    #+#             */
/*   Updated: 2018/10/02 23:31:54 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_stats(stat_node *tmp, param *p)
{
	if (p->fg & LS_a)
	{
		printf("%d ", tmp->stat_info->st_nlink);
		printf("%s  ", tmp->uname);
		printf("%s   ", tmp->gname);
		printf("%llu \n", tmp->stat_info->st_size);
	}
	else
	{
		if (strcmp(tmp->sname, ".") && strcmp(tmp->sname, ".."))
		{		
			printf("%d ", tmp->stat_info->st_nlink);
        	printf("%s  ", tmp->uname);
         	printf("%s   ", tmp->gname);
         	printf("%llu \n", tmp->stat_info->st_size);
		}
	}
}
