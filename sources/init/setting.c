/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 11:38:44 by alegent           #+#    #+#             */
/*   Updated: 2016/09/08 11:45:26 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void					set_mandelbrot(t_mlx *mlx)
{
	mlx->fractal->iter = 200;
	mlx->fractal->p0->x = -2.1;
	mlx->fractal->p1->x = 0.6;
	mlx->fractal->p0->y = -1.2;
	mlx->fractal->p1->y = 1.2;
	mlx->fractal->zoom = 204;
}

void					set_julia(t_mlx *mlx)
{
	mlx->fractal->iter = 50;
	mlx->fractal->p0->x = -1;
	mlx->fractal->p1->x = 0.9;
	mlx->fractal->p0->y = -1.1;
	mlx->fractal->p1->y = 0.9;
	mlx->fractal->zoom = 282;
	mlx->fractal->cplx->c_r = 0.285;
	mlx->fractal->cplx->c_i = 0.01;
}

void					set_sword(t_mlx *mlx)
{
	mlx->fractal->iter = 150;
	mlx->fractal->p0->x = -1;
	mlx->fractal->p1->x = 1.5;
	mlx->fractal->p0->y = -1.1;
	mlx->fractal->p1->y = 0.8;
	mlx->fractal->zoom = 272;
	mlx->fractal->cplx->c_r = 0.285;
	mlx->fractal->cplx->c_i = 0.01;
}
