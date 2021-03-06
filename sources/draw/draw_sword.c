/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_sword.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 11:37:43 by alegent           #+#    #+#             */
/*   Updated: 2016/09/08 12:19:20 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static int				iterate(t_mlx *mlx, t_coor *iter)
{
	int					i;
	t_cplx				cplx;
	double				tmp;

	i = -1;
	cplx.c_r = mlx->fractal->cplx->c_r;
	cplx.c_i = mlx->fractal->cplx->c_i;
	cplx.z_r = iter->x / mlx->fractal->zoom + mlx->fractal->p0->x;
	cplx.z_i = iter->y / mlx->fractal->zoom + mlx->fractal->p0->y;
	while (cplx.z_r * cplx.z_r + cplx.z_i * cplx.z_i < 4
			&& ++i < mlx->fractal->iter)
	{
		tmp = cplx.z_r;
		cplx.z_r = fabs(cplx.z_r * cplx.z_r - cplx.z_i * cplx.z_i + cplx.c_r);
		cplx.z_i = fabs(2 * cplx.z_i * tmp + cplx.c_i);
	}
	return (i);
}

void					draw_sword(t_mlx *mlx)
{
	t_coor				iter;

	iter.x = 0;
	while (iter.x < WIN_X)
	{
		iter.y = 0;
		while (iter.y < WIN_Y)
		{
			if (iterate(mlx, &iter) == mlx->fractal->iter)
				put_pixel(mlx, &iter, RED);
			if (iterate(mlx, &iter) != mlx->fractal->iter)
				put_pixel(mlx, &iter, 0);
			iter.y++;
		}
		iter.x++;
	}
}
