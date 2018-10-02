/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_type.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 19:06:57 by xinzhang          #+#    #+#             */
/*   Updated: 2018/10/01 19:44:19 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void print_type(stat_node *tmp)
{
	printf((tmp->st_mode & S_IFMT) == S_IFREG ? "-" : "");
	printf((tmp->st_mode & S_IFMT) == S_IFDIR ? "d" : "");
 	printf((tmp->st_mode & S_IFMT) == S_IFLNK ? "l" : "");
	printf((tmp->st_mode & S_IFMT) == S_IFCHR ? "c" : "");
	printf((tmp->st_mode & S_IFMT) == S_IFBLK ? "b" : "");
	printf((tmp->st_mode & S_IFMT) == S_IFSOCK ? "s" : "");
	printf((tmp->st_mode & S_IFMT) == S_IFIFO ? "f" : "");
}
