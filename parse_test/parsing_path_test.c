/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsingpath.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 09:17:14 by xinzhang          #+#    #+#             */
/*   Updated: 2018/10/03 17:53:50 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

int	parsing_path(char *path, param *pa)
{
	s_stat	*buf;

	if (lstat(path, buf) == -1)
	{
		printf("path %s is not valid \n", path);
		perror("path in not valid:");
//		exit(1);
		return(0); 
	}
	pa->pdname = strdup(path);
	if (S_ISDIR(buf->st_mode))
	{
		printf("this is an dir\n");	
		pa->isfn = ISDIR;
	}
	else
	{
		printf("this is an file\n");
		pa->isfn = ISFILE;
	}
	return (1);
}
		
