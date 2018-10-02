/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_permission.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 19:00:36 by xinzhang          #+#    #+#             */
/*   Updated: 2018/10/01 19:03:32 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_permission(stat_node *tmp)
{
	printf((tmp->stat_info->st_mode & S_IRUSR) ? "r" : "-");
	printf((tmp->stat_info->st_mode & S_IWUSR) ? "w" : "-");
	printf((tmp->stat_info->st_mode & S_IXUSR) ? "x" : "-");
	printf((tmp->stat_info->st_mode & S_IRGRP) ? "r" : "-");
	printf((tmp->stat_info->st_mode & S_IWGRP) ? "w" : "-");
	printf((tmp->stat_info->st_mode & S_IXGRP) ? "x" : "-");
	printf((tmp->stat_info->st_mode & S_IROTH) ? "r" : "-");
	printf((tmp->stat_info->st_mode & S_IWOTH) ? "w" : "-");
	printf((tmp->stat_info->st_mode & S_IXOTH) ? "x" : "-");
}
