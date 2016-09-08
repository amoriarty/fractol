/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia_hook.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 11:38:04 by alegent           #+#    #+#             */
/*   Updated: 2016/09/08 11:38:05 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int					julia_hook(int x, int y, t_mlx *mlx)
{
	if (x > 0 && x < WIN_X && y > 0 && y < WIN_Y)
	{
		if (x < WIN_X / 2 && y < WIN_Y)
			mlx->fractal->cplx->c_r += 0.05;
		if (x > WIN_X / 2 && y < WIN_Y)
			mlx->fractal->cplx->c_r -= 0.05;
		if (x < WIN_X / 2 && y > WIN_Y)
			mlx->fractal->cplx->c_i += 0.05;
		if (x > WIN_X / 2 && y > WIN_Y)
			mlx->fractal->cplx->c_i -= 0.05;
	}
	fractol(mlx, mlx->fractal->type);
	return (0);
}
