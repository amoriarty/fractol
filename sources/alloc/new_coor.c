/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_coor.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 11:36:52 by alegent           #+#    #+#             */
/*   Updated: 2016/09/08 11:36:53 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

t_coor						*new_coor(void)
{
	t_coor					*new;

	if (!(new = (t_coor *)malloc(sizeof(t_coor))))
		return (NULL);
	new->x = 0;
	new->y = 0;
	return (new);
}
