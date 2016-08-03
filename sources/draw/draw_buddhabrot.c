//
//           :::      ::::::::
//         :+:      :+:    :+:     draw_buddhabrot.c
//       +:+ +:+         +:+
//     +#+  +:+       +#+          By: Alexandre LEGENT <alegent@student.42.fr>
//   +#+#+#+#+#+   +#+
//        #+#    #+#
//       ###   ###########.fr      Created: 03/08/2016 14:33 by alegent
//

#include "fractol.h"

static int				iterate(t_mlx *mlx, t_coor *iter)
{
	int 				i;
	t_cplx				cplx;
	double				tmp;

	i = 0;
	cplx.z_r = 0;
	cplx.z_i = 0;
	cplx.c_r = iter->x / mlx->fractal->zoom + mlx->fractal->p0->x;
	cplx.c_i = iter->y / mlx->fractal->zoom + mlx->fractal->p0->y;
	while (cplx.z_r * cplx.z_r + cplx.z_i * cplx.z_i < 4
		   && i < mlx->fractal->iter)
	{
		tmp = cplx.z_r;
		cplx.z_r = cplx.z_r * cplx.z_r - cplx.z_i * cplx.z_i + cplx.c_r;
		cplx.z_i = 2 * cplx.z_i * tmp + cplx.c_i;
		i++;
	}
	return (i);
}

void 					draw_buddhabrot(t_mlx *mlx)
{
	t_coor				iter;

	iter.x = 0;
	while (iter.x < WIN_X)
	{
		iter.y = 0;
		while (iter.y < WIN_Y)
		{
			if (iterate(mlx, &iter) != mlx->fractal->iter)
				put_pixel(mlx, &iter, PURPLE);
			iter.y++;
		}
		iter.x++;
	}
}