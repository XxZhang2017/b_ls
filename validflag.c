/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validflag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 09:40:43 by xinzhang          #+#    #+#             */
/*   Updated: 2018/09/27 10:44:08 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		validflag(char *c, ls_flag *fg)
{
	while (*c)
	{
		if (*c != 'a' && *c != 'l' && *c != 'r' && *c != 't')
		{
			fg->error = 1;
			return (0);
		}
		else
		{
			if (*c == 'a')
			{
				printf("a\n");
				fg->a = 1;
			}
			else if(*c == 'l')
			{
				printf("l\n");
				fg->l = 1;
			}
			else if(*c == 'r')
			{
				printf("r\n");
				fg->r = 1;
			}
			else if(*c == 't')
			{
				printf("t\n");
				fg->t = 1;
			}
		}
		c++;
	}
	return (1);
}



