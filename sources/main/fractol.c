//
//           :::      ::::::::
//         :+:      :+:    :+:     init.c
//       +:+ +:+         +:+
//     +#+  +:+       +#+          By: Alexandre LEGENT <alegent@student.42.fr>
//   +#+#+#+#+#+   +#+
//        #+#    #+#
//       ###   ###########.fr      Created: 02/08/2016 15:06 by alegent
//

#include "fractol.h"

int 					fractol(t_mlx *mlx, t_frac type)
{
	(void)type;
	if (!(mlx->img))
		init_img(mlx);
	mlx_clear_window(mlx->mlx_ptr, mlx->win_ptr);
	mlx_put_image_to_window(mlx->mlx_ptr, mlx->win_ptr, mlx->img->img_ptr, 0, 0);
	mlx_loop(mlx->mlx_ptr);
	return (EXIT_SUCCESS);
}