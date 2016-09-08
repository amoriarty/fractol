/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_img.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 11:37:19 by alegent           #+#    #+#             */
/*   Updated: 2016/09/08 11:37:20 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

t_img						*new_img(void)
{
	t_img					*new;

	if (!(new = (t_img *)malloc(sizeof(t_img))))
		return (NULL);
	new->bpp = 0;
	new->endian = 0;
	new->sizeline = 0;
	new->img_ptr = NULL;
	new->data = NULL;
	return (new);
}
