/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_mlx.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 11:38:38 by alegent           #+#    #+#             */
/*   Updated: 2016/09/08 11:41:34 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

t_bool					init_mlx(t_mlx *mlx)
{
	if (!(mlx->mlx_ptr = mlx_init()))
		return (FALSE);
	if (!(mlx->win_ptr = mlx_new_window(mlx->mlx_ptr,
					WIN_X, WIN_Y, WIN_TITLE)))
		return (FALSE);
	mlx->img = NULL;
	mlx->fractal = NULL;
	return (TRUE);
}
