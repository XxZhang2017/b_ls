/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_param.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 23:13:05 by xinzhang          #+#    #+#             */
/*   Updated: 2018/09/28 23:28:52 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

param	*init_param()
{
	param	*pa;

	pa = (param *)malloc(sizeof(param));
	pa->fg = 0;
	pa->error = 0;
	pa->pdname = NULL;
	pa->isfn =0;

	return (pa);
}
