//
//           :::      ::::::::
//         :+:      :+:    :+:     init_mlx.c
//       +:+ +:+         +:+
//     +#+  +:+       +#+          By: Alexandre LEGENT <alegent@student.42.fr>
//   +#+#+#+#+#+   +#+
//        #+#    #+#
//       ###   ###########.fr      Created: 02/08/2016 15:50 by alegent
//

#include "fractol.h"

t_bool					init_mlx(t_mlx *mlx)
{
	if (!(mlx->mlx_ptr = mlx_init()))
		return (FALSE);
	if (!(mlx->win_ptr = mlx_new_window(mlx->mlx_ptr,
									   WIN_X, WIN_Y, WIN_TITLE)))
		return (FALSE);
	mlx->img = NULL;
	return (TRUE);
}