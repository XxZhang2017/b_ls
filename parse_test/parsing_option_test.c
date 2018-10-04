/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_option.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 10:17:29 by xinzhang          #+#    #+#             */
/*   Updated: 2018/10/03 17:35:33 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

int	parse_option_flag(char *s, int *flag)
{
	int	n;

//	if (s[0] != '-')
//	{
//		printf("not a option\n");
//		return (0);
//	}
//	else
//	{
		n = 0;
//		++s;
		while (*s)
		{
			if ((n = ft_strchr_index("altr", *s)) == -1)
			{
				return (0);
			//	printf("option only -a, -l, -t, -r\n");
			//	exit(1);
			}
			*flag |= (1 << n);
			s++;
		}
	return (1);
//	}
}

static int	ft_strchr_index(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (i);
		++i;
	}
	return (-1);
}

int	parse_option(char *opt, param *p)
{
	int count;

	count = 0;
	if (opt[count] != '-')
	{
		return (0);
	}
	count++;
	if (opt[count] == 'a' || opt[count] == 'l' || opt[count] == 't' 
				|| opt[count] == 'r') 
		return(parse_option_flag(&opt[count], &(p->fg)));
	else
	{
		return (0);
	}
}
