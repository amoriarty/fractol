/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_mandelbrot.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 11:37:37 by alegent           #+#    #+#             */
/*   Updated: 2016/09/08 12:21:07 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static int				iterate(t_mlx *mlx, t_coor *iter)
{
	int					i;
	t_cplx				cplx;
	double				tmp;

	i = -1;
	cplx.z_r = 0;
	cplx.z_i = 0;
	cplx.c_r = iter->x / mlx->fractal->zoom + mlx->fractal->p0->x;
	cplx.c_i = iter->y / mlx->fractal->zoom + mlx->fractal->p0->y;
	while (cplx.z_r * cplx.z_r + cplx.z_i * cplx.z_i < 4
			&& ++i < mlx->fractal->iter)
	{
		tmp = cplx.z_r;
		cplx.z_r = cplx.z_r * cplx.z_r - cplx.z_i * cplx.z_i + cplx.c_r;
		cplx.z_i = 2 * cplx.z_i * tmp + cplx.c_i;
	}
	return (i);
}

void					draw_mandelbrot(t_mlx *mlx)
{
	t_coor				iter;

	iter.x = 0;
	while (iter.x < WIN_X)
	{
		iter.y = 0;
		while (iter.y < WIN_Y)
		{
			if (iterate(mlx, &iter) == mlx->fractal->iter)
				put_pixel(mlx, &iter, PURPLE);
			else
				put_pixel(mlx, &iter, 0);
			iter.y++;
		}
		iter.x++;
	}
}
