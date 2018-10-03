/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_name.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 20:06:45 by xinzhang          #+#    #+#             */
/*   Updated: 2018/10/02 21:52:29 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "print.h"

void	print_name(stat_node *tmp, stat_dlist *dl)
{
	char path[255];
	char linkpath[255];
	ssize_t reg;

	path[0] = '\0';
	strcat(path, dl->pa->pdname);
//	printf("%s\n", path);
	strcat(path, "/");
//	printf("%s\n", path);
	strcat(path, tmp->sname);
	printf("%s\n", path);
	if((reg = readlink(path, linkpath, 255) != -1))
	{
		linkpath[reg * 8] = '\0';
		printf("%s -> %s\n", tmp->sname, linkpath);
	}
	else
		printf("%s\n", tmp->sname);
}
