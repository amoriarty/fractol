//
//           :::      ::::::::
//         :+:      :+:    :+:     key_hook.c
//       +:+ +:+         +:+
//     +#+  +:+       +#+          By: Alexandre LEGENT <alegent@student.42.fr>
//   +#+#+#+#+#+   +#+
//        #+#    #+#
//       ###   ###########.fr      Created: 04/08/2016 11:12 by alegent
//

#include "fractol.h"

static void				exit_proper(t_mlx *mlx)
{
	free_fgr(mlx->fractal);
	free_img(mlx);
	mlx_destroy_window(mlx->mlx_ptr, mlx->win_ptr);
	exit(EXIT_SUCCESS);
}

int 					key_hook(int keycode, t_mlx *mlx)
{
//TODO DEBUG MODE
#ifdef DEBUG
	ft_printf("Keypress %d\n", keycode);
#endif
	if (keycode == KEY_ESC || keycode == KEY_Q)
		exit_proper(mlx);
	return (0);
}