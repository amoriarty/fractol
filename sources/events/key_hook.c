/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 11:38:10 by alegent           #+#    #+#             */
/*   Updated: 2016/09/08 11:45:59 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void				exit_proper(t_mlx *mlx)
{
	free_fgr(mlx->fractal);
	free_img(mlx);
	mlx_destroy_window(mlx->mlx_ptr, mlx->win_ptr);
	exit(EXIT_SUCCESS);
}

int						key_hook(int keycode, t_mlx *mlx)
{
	if (keycode == KEY_ESC || keycode == KEY_Q)
		exit_proper(mlx);
	return (0);
}
