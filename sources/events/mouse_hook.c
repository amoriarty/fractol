//
//           :::      ::::::::
//         :+:      :+:    :+:     mouse_hook.c
//       +:+ +:+         +:+
//     +#+  +:+       +#+          By: Alexandre LEGENT <alegent@student.42.fr>
//   +#+#+#+#+#+   +#+
//        #+#    #+#
//       ###   ###########.fr      Created: 04/08/2016 11:41 by alegent
//

#include "fractol.h"

int 					mouse_hook(int button, int x, int y, t_mlx *mlx)
{
//TODO DEBUG
#ifdef DEBUG
	ft_printf("Button pressed %d (%d,%d)\n", button, x, y);
#endif
	double	x_real;
	double	y_real;

	if (x > 0 && y > 0)
	{
		x_real = (x / mlx->fractal->zoom) + mlx->fractal->p0->x;
		y_real = (y / mlx->fractal->zoom) + mlx->fractal->p0->y;
		if (button == MOUSE_UP)
		{
			mlx->fractal->zoom *= 1.1;
			mlx->fractal->p0->x = x_real - (x / mlx->fractal->zoom);
			mlx->fractal->p0->y = y_real - (y / mlx->fractal->zoom);
			mlx->fractal->iter++;
		}
		if (button == MOUSE_DOWN)
		{
			mlx->fractal->zoom /= 1.1;
			mlx->fractal->p0->x = x_real - (x / mlx->fractal->zoom);
			mlx->fractal->p0->y = y_real - (y / mlx->fractal->zoom);
			mlx->fractal->iter--;
		}
	}
	fractol(mlx, mlx->fractal->type);
	return (0);
}