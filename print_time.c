/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_time.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 20:01:02 by xinzhang          #+#    #+#             */
/*   Updated: 2018/10/01 20:03:15 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "print.h"

void	print_time(stat_node *tmp)
{
	tm	*mytime;
	char buff[30];
	
	mytime = localtime(&(tmp->stat_info->st_mtimespec.tv_sec));
	strftime(buff, 30, "%b %d %H:%M", mytime);
	printf("%s  ", buff);
}	
