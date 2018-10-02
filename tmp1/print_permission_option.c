/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_permission.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 18:49:46 by xinzhang          #+#    #+#             */
/*   Updated: 2018/10/01 19:02:41 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_permission_option(stat_node *tmp, param *p)
{
	if (p->fg & LS_a)
	{
		if(tmp->sname[0] != '.')
		{
			printf_permission(tmp);
			printf("   ");
		}
	}
	else
	{
		printf_permission(tmp);
		printf("   ");
	}
}


