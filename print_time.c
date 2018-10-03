/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_time.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 20:01:02 by xinzhang          #+#    #+#             */
/*   Updated: 2018/10/02 23:23:15 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_time(stat_node *tmp, param *p)
{
	tm	*mytime;
	char buff[30];

	if (p->fg & LS_a)
	{	
		mytime = localtime(&(tmp->stat_info->st_mtimespec.tv_sec));
		strftime(buff, 30, "%b %d %H:%M", mytime);
		printf("%s\n", buff);
	}
	else
	{
		if (strcmp(tmp->sname, ".") && strcmp(tmp->sname, ".."))
		{
			mytime = localtime(&(tmp->stat_info->st_mtimespec.tv_sec));
			strftime(buff, 30, "%b %d %H:%M", mytime);
			printf("%s\n", buff);
		}
	}
}	
