//
//           :::      ::::::::
//         :+:      :+:    :+:     setting.c
//       +:+ +:+         +:+
//     +#+  +:+       +#+          By: Alexandre LEGENT <alegent@student.42.fr>
//   +#+#+#+#+#+   +#+
//        #+#    #+#
//       ###   ###########.fr      Created: 03/08/2016 12:11 by alegent
//

#include "fractol.h"

void					set_mandelbrot(t_mlx *mlx)
{
	mlx->fractal->iter = 100;
	mlx->fractal->p0->x = -2.02;
	mlx->fractal->p1->x = 0.6;
	mlx->fractal->p0->y = -2.02;
	mlx->fractal->p1->y = 1.2;
	mlx->fractal->zoom = 204;
	draw_mandelbrot(mlx);
}