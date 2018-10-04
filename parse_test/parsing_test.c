/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 09:10:01 by xinzhang          #+#    #+#             */
/*   Updated: 2018/10/03 17:26:42 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

int	parsing(int ac, char **av, param *pa)
{
	int n;
	int	reg[2];

	n = 2;
	if (ac == 1)
	{
		printf("usage: ls \n");
		exit(1);
	}
	else if (strcmp(av[1], "ls"))
	{
		printf("bad command\n");
		exit(1);
	}
	else 
	{
		while (n < ac)
		{
			printf("process\n");
			reg[0] = parsing_path(av[n], pa);
			reg[1] = parse_option(av[n], pa);
			if (reg[0])
				return (1);
			else if (reg[0] || reg[1])
				n++;
			else if (!(reg[0] && reg[1]))
			{
				printf("path does not exit and option does not exit\n");
				exit(1);
			}
			else
			{
				printf("unspecified condition\n");
				exit(1);
			}
		}
		if (pa->pdname == NULL)
		{
			pa->pdname = strdup(".");
			pa->isfn = ISDIR;
			return (1);
		}
	}
	printf("parsing error, missing condition in parsing function\n");
	exit(1);
}
