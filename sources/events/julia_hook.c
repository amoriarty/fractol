//
//           :::      ::::::::
//         :+:      :+:    :+:     julia_hook.c
//       +:+ +:+         +:+
//     +#+  +:+       +#+          By: Alexandre LEGENT <alegent@student.42.fr>
//   +#+#+#+#+#+   +#+
//        #+#    #+#
//       ###   ###########.fr      Created: 04/08/2016 12:05 by alegent
//

#include "fractol.h"

int					julia_hook(int x, int y, t_mlx *mlx)
{
	if (x > 0 && x < WIN_X && y > 0 && y < WIN_Y)
	{
		if (x < WIN_X / 2 && y < WIN_Y / 2)
			mlx->fractal->cplx->c_r += 0.05;
		if (x > WIN_X / 2 && y < WIN_Y / 2)
			mlx->fractal->cplx->c_r -= 0.05;
		if (x < WIN_X / 2 && y > WIN_Y / 2)
			mlx->fractal->cplx->c_i += 0.05;
		if (x > WIN_X / 2 && y > WIN_Y / 2)
			mlx->fractal->cplx->c_i -= 0.05;
	}
	fractol(mlx, mlx->fractal->type);
	return (0);
}