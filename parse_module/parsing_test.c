/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 09:10:01 by xinzhang          #+#    #+#             */
/*   Updated: 2018/10/05 17:52:35 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"
mode_t	get_mode(char *c)
{
	stat_	*buf;

	if (lstat(c, buf) == 0)
		return (buf->st_mode);
	printf("lstat failed when parse not path specify case\n");
	return (0);
}

int	parsing(int ac, char **av, param *pa)
{
	int n;
	int	reg[2];

	n = 2;
	if (ac == 1)
	{
		printf("usage: ls \n");
		return (1);
	}
	else if (strcmp(av[1], "ls"))
	{
		printf("bad command\n");
		return (1);
	}
	else 
	{
		while (n < ac)
		{
			if (parsing_option(av[n], pa))
				return (parsing_path(av[n], pa));
			else				
				n++;
		}
		if (!(pa->pf).pdname)
		{
			(pa->pf).pdanme = strdup(".");
			if(((pa->pf).p_mode = get_mode(pa->pf->pdname)) != 1)
				return (0);
			else
				return (1);
		}
		else
		{
			printf("underminate condition\n");
	}
}
