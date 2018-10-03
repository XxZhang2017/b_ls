/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsingpath.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 09:17:14 by xinzhang          #+#    #+#             */
/*   Updated: 2018/10/03 10:40:44 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

int	parsing_path(char *path, param *pa)
{
	s_stat	*buf;

	if (lstat(path, buf) == -1)
	{
		printf("path is not valid\n");
		exit(1);
	}
	strcpy(pa->pdname, path);
	if (S_ISDIR(buf->st_mode))
	{
		printf("this is an dir\n");	
		isfn = 0;
	}
	else
	{
		printf("this is an file\n");
		isfn = 1;
	}
	return (1);
}
		

