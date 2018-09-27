/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_flag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 23:30:50 by xinzhang          #+#    #+#             */
/*   Updated: 2018/09/27 10:44:01 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	parse_flag(int n, char **c, ls_flag* fg)
{
	int	i;

	i = 2;
	if (n == 1)
	{
		printf("no command\n");
		fg->error = 1;
		exit(1);
	}
	else if (n == 2)
	{
		if (strcmp(c[1],"ls") != 0)
		{
			printf("bad command\n");
			fg->error = 1;
			exit(1);
		}
		//do ls 
		return (0);
	}	
	else
	{
		while (i < n)
		{
			if (c[i][0] != '-')
			{
				printf("flag format error\n");
				fg->error = 1;
				exit(1);
			}
			else
			{
				
				if (!validflag(&c[i][1], fg))
				{
					printf("not a valid flag\n");
					fg->error = 1;
					exit(1);
				}
				i++;
			}
		}
		return (1);
	}
}
			


			
