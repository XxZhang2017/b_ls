#ifndef TEST_H
# define TEST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <dirent.h>

# define LS_a	1
# define LS_l	2
# define LS_t	4
# define LS_r	8

typedef		struct param
{
	int		fg;
	int		error;
	char	*pdname;
	int		isfn;
}			param;

int			parsing(int ac, char **av, param *pa);

int			parse_options(char *s, int *flags);

static int	ft_strchr_index(char *s, int c);

char		*parse_path(char *c, char *p, int *a);

param *		init_param();
#endif
