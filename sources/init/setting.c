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
	mlx->fractal->p0->x = -2.1;
	mlx->fractal->p1->x = 0.6;
	mlx->fractal->p0->y = -1.2;
	mlx->fractal->p1->y = 1.2;
	mlx->fractal->zoom = 204;
	draw_mandelbrot(mlx);
}

void					set_julia(t_mlx *mlx)
{
	mlx->fractal->iter = 150;
	mlx->fractal->p0->x = -1;
	mlx->fractal->p1->x = 1;
	mlx->fractal->p0->y = -1.2;
	mlx->fractal->p1->y = 1.2;
	mlx->fractal->zoom = 204;
	mlx->fractal->cplx->c_r = 0.285;
	mlx->fractal->cplx->c_i = 0.01;
	draw_julia(mlx);
}

void					set_buddhabrot(t_mlx *mlx)
{
	mlx->fractal->iter = 150;
	mlx->fractal->p0->x = -2.1;
	mlx->fractal->p1->x = 0.6;
	mlx->fractal->p0->y = -1.2;
	mlx->fractal->p1->y = 1.2;
	mlx->fractal->zoom = 204;
	draw_buddhabrot(mlx);
}