/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 09:10:01 by xinzhang          #+#    #+#             */
/*   Updated: 2018/10/03 10:40:02 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

int	parsing(int ac, char **av, param *pa)
{
	int n;
	int	reg[2];

	n = 2;
	if (strcmp(av[1], "ls"))
	{
		printf("bad command\n");
		exit(1);
	}
	else 
	{
		while (n < ac)
		{
			reg[0] = parsing_path(av[n], pa);
			reg[1] = parsing_option(av[n], pa);
			if (reg[0])
				return (1);
			else if (reg[0] || reg[1])
				n++;
			else if (!(reg[0] && reg[1]))
			{
				printf("path does not exit and option does not exit\n");
				exit(1);
			}
		}
	}
	printf("parsing error, missing condition in parsing function\n");
	exit(1);
}

