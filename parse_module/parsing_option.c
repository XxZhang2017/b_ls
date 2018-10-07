#include "libft_test.h"

int	ft_strchr_index(char a, para *p)
{
	static char	*alt;

	int	i;
	alt = "altr";
	i = 0;
	while (alt[i])
	{
		if (alt[i] == a)
		{
			p->fg << i + 1;
			return (0);
		}
		i++;
	}
	printf("no match for the option\n");
	return (1);
}

int	parsing_option(char *c, param *p)
{
	int	count;

	count = 1;
	if (c[0] != '-')
	{
		printf("bad option format, should start with -\n");
		return (1);
	}
	else
	{
		while (c[count])
		{
			if (ft_strchr_altr(c[count++], p) == -1)
			{
				printf("option is not correct, should be alter\n");
				return (1);
			}
		}
		return (0);
	}
}
