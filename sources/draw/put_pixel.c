/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_pixel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 11:37:50 by alegent           #+#    #+#             */
/*   Updated: 2016/09/08 11:37:51 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void			put_pixel(t_mlx *mlx, t_coor *pixel, int color)
{
	int						x;
	int						y;
	unsigned int			c;

	y = pixel->y * mlx->img->sizeline;
	x = pixel->x * mlx->img->bpp / 8;
	c = mlx_get_color_value(mlx->mlx_ptr, color);
	mlx->img->data[x + y] = (c) & 0xFF;
	mlx->img->data[x + y + 1] = (c >> 8) & 0xFF;
	mlx->img->data[x + y + 2] = (c >> 16) & 0xFF;
	mlx->img->data[x + y + 3] = (c >> 24) & 0xFF;
}
