//
//           :::      ::::::::
//         :+:      :+:    :+:     draw_mandelbrot.c
//       +:+ +:+         +:+
//     +#+  +:+       +#+          By: Alexandre LEGENT <alegent@student.42.fr>
//   +#+#+#+#+#+   +#+
//        #+#    #+#
//       ###   ###########.fr      Created: 03/08/2016 12:10 by alegent
//

#include "fractol.h"

void 					draw_mandelbrot(t_mlx *mlx)
{
	//t_coor				img;
	t_coor				iter;
	t_fgr				*fgr;
	t_cplx				cplx;
	int 				i;
	double				tmp;

	fgr = mlx->fractal;

	//TODO DEBUG
	fgr->zoom = 100;
	//img.x = (double)((fgr->p1->x - fgr->p0->x) * fgr->zoom);
	//img.y = (double)((fgr->p1->y - fgr->p0->y) * fgr->zoom);

	iter.x = 0;
	while (/*iter.x < img.x &&*/ iter.x < WIN_X)
	{
		iter.y = 0;
		while (/*iter.y < img.y &&*/ iter.y < WIN_Y)
		{
			cplx.c_r = (double)(iter.x / fgr->zoom + fgr->p0->x);
			cplx.c_i = (double)(iter.y / fgr->zoom + fgr->p0->y);
			cplx.z_r = 0;
			cplx.z_i = 0;
			i = 0;

			while ((cplx.z_r * cplx.z_r + cplx.z_i * cplx.z_i) && i < fgr->iter)
			{
				tmp = cplx.z_r;
				cplx.z_r = cplx.z_r * cplx.z_r - cplx.z_i * cplx.z_i + cplx.c_r;
				cplx.z_i = 2 * cplx.z_i * tmp * cplx.c_i;
				i++;
			}
			if (i != fgr->iter)
				put_pixel(mlx, &iter, PURPLE);
			iter.y++;
		}
		iter.x++;
	}
}