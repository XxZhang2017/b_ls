/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_name.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 20:06:45 by xinzhang          #+#    #+#             */
/*   Updated: 2018/10/02 19:58:40 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "print.h"

void	print_name(stat_node *tmp, stat_dlist *dl)
{
	char path[255];
	char linkpath[255];
	int reg;

	path = strcat(dl->d_name, "/");
	path = strcat(&path, tmp->sname);
	if((reg = readlink(path, linkpath, sizeof(linkpath)) != 0))
	{
		linkpath[reg] = '\0';
		printf("%s -> %s\n", tmp->sname, linkpath);
	}
	else
		printf("%s\n", tmp->sname);
}
