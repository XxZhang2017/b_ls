
#include "test.h"

int			parsing(int ac, char **av, param *p)//int *flags, char *dn)
{
	int	i;

	printf("parsing\n");

	p->fg = 0;
	i = 1;
	if (strcmp(av[1], "ls") != 0)
	{
		printf("bac command\n");
		return (-1);
	}
	
	while (++i < ac)
	{
		if (av[i][0] == '-' && av[i][1])
		{
			printf("parse %s\n", av[i]);
			if (!parse_options(av[i], &(p->fg)))
				return (-1);
		}
		else
		{
			p->pdname = parse_path(av[i], p->pdname, &(p->isfn));
			if (!p->pdname)
				return (-1);
			else
				return (0);
		}
	}
	return (i);
}

int			parse_options(char *s, int *flags)
{
	int		n;

	printf("pass option\n");
	while (*(++s))
	{
		if ((n = ft_strchr_index("altr", *s)) == -1)
			printf("no option\n");
		*flags |= (1 << n);
		printf("%c\n", *s);
	}
	return (1);
}

static int	ft_strchr_index(char *s, int c)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (i);
		++i;
	}
	return (-1);
}

char	*parse_path(char *c, char *dn, int *a)
{
	if (opendir(c) == NULL)
		return (NULL);
	else
	{
		dn = strdup(c);
		*a = 1;
		printf("the path %s\n", dn);
	}
	return (dn);
}
