/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 20:20:48 by xinzhang          #+#    #+#             */
/*   Updated: 2018/10/05 17:52:55 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <sys/stat.h>
# include <dirent.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <sys/types.h>
# include <pwd.h>
# include <grp.h>
# include <time.h>


# define LS_a	1
# define LS_l	2
# define LS_t	4
# define LS_r	8

typedef	struct stat			stat_;
typedef struct passwd		s_passwd;
typedef struct group		s_group;

typedef			struct param
{
	int			fg;
	int			error;
	param_info	pf;
}				param;

typedef			struct param_info
{
	char		*pdname;
	mode_t		p_mode;
}				param_info;

typedef			struct stat_node
{
	s_stat			*stat_info;
	char			*sname;
	char			*uname;
	char			*gname;
 
	unsigned int	fsize;

	struct stat_node	*next;
}			stat_node;

typedef				struct stat_dlist
{
	param			*pa;
	stat_node		*head;
	stat_node		*tail;
	unsigned int	maxlen;
	int				count;
	unsigned long	totalsize;
}					stat_dlist;

// function pointer:
typedef		int (*SORT_PTR)(char *, char *);
typedef		int	(*TIME_PTR)(time_t, time_t);



//function definition:
void		init_node(stat_node *n, s_stat *data, char *m, char *u, char *g);
stat_dlist	*init_dlist(param *p);

stat_dlist	*appendnode(stat_dlist *dlist, s_stat *data, char *c, char *u, char *g);

stat_dlist	deletenode(stat_dlist *dlist);

void		stat_info(stat_dlist *dlist, char *fn);
void		printdlist_a(stat_dlist *dl);
void		printdlist_l(stat_dlist *dl);



void		updatelen(unsigned int *a, unsigned int b);


stat_dlist	getnodeinfo(stat_dlist *a, int c);
void		printnode(stat_node *a);

void		sort_list_order(stat_dlist *li, int (*f)(char *, char *));
void		sort_list_time(stat_dlist *li, int (*f)(time_t, time_t));
void		sort_list_time_order(stat_dlist *l, TIME_PTR t, SORT_PTR s);

int         parsing(int ac, char **av, param *pa);
int         parsing_options(char *s, param *pa);
static int  ft_strchr_index(char *s, para *p);
int			parsing_path(char *c, param *p);
mode_t		get_mode(char *c);
param *     init_param();

//printf:
void    print_permission(stat_node *tmp, param *p);
void    print_type(stat_node *tmp, param *p);
void    print_time(stat_node *tmp, param *p);
void    print_stats(stat_node *tmp, param *p);
void	print_name(stat_node *t, stat_dlist *dl);

#endif
