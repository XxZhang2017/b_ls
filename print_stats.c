/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stats.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 19:56:31 by xinzhang          #+#    #+#             */
/*   Updated: 2018/10/01 20:00:48 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_stats(stat_node *tmp)
{
	printf("%d ", tmp->stat_info->st_nlink);
	printf("%s  ", tmp->uname);
	printf("%s   ", tmp->gname);
	printf("%llu ", tmp->stat_info->st_size);
}
