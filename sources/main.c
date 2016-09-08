/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 11:39:15 by alegent           #+#    #+#             */
/*   Updated: 2016/09/08 11:44:14 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void				frac_select(t_mlx *mlx, t_frac type)
{
	if (!mlx->fractal || mlx->fractal->type != type)
	{
		if (mlx->fractal)
			free_fgr(mlx->fractal);
		mlx->fractal = new_fgr(type);
		if (type == MANDELBROT)
			set_mandelbrot(mlx);
		if (type == JULIA)
			set_julia(mlx);
		if (type == SWORD)
			set_sword(mlx);
	}
	if (type == MANDELBROT)
		draw_mandelbrot(mlx);
	if (type == JULIA)
		draw_julia(mlx);
	if (type == SWORD)
		draw_sword(mlx);
}

int						fractol(t_mlx *mlx, t_frac type)
{
	if (!(mlx->img))
		init_img(mlx);
	frac_select(mlx, type);
	mlx_clear_window(mlx->mlx_ptr, mlx->win_ptr);
	mlx_put_image_to_window(
			mlx->mlx_ptr, mlx->win_ptr, mlx->img->img_ptr, 0, 0);
	mlx_key_hook(mlx->win_ptr, key_hook, mlx);
	mlx_mouse_hook(mlx->win_ptr, mouse_hook, mlx);
	if (type == JULIA)
		mlx_hook(mlx->win_ptr, 6, (1 << 8), julia_hook, mlx);
	mlx_loop(mlx->mlx_ptr);
	return (EXIT_SUCCESS);
}

int						main(int ac, char **av)
{
	t_mlx				mlx;
	t_frac				type;

	if (ac != 2 || ((type = get_frac(av[1])) == ERR_FRAC))
	{
		usage();
		return (EXIT_FAILURE);
	}
	if (init_mlx(&mlx) == FALSE)
		return (EXIT_FAILURE);
	return (fractol(&mlx, type));
}
