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

void					draw(t_mlx *mlx)
{
	t_coor				base;

	base.x = 0;
	while (base.x < WIN_SIZE / 2)
	{
		base.y = 0;
		while (base.y < WIN_SIZE / 2)
		{
			put_pixel(mlx, &base, PURPLE);
			base.y++;
		}
		base.x++;
	}
	mlx_put_image_to_window(mlx->mlx_ptr, mlx->win_ptr, mlx->img->img_ptr, 0, 0);
}

int 					init(t_frac type)
{
	t_mlx				mlx;

	(void)type;
	if (!(mlx.mlx_ptr = mlx_init()))
		return (EXIT_FAILURE);
	if (!(mlx.win_ptr = mlx_new_window(mlx.mlx_ptr,
									   WIN_SIZE, WIN_SIZE, WIN_TITLE)))
		return (EXIT_FAILURE);
	if (!(mlx.img = new_img()))
		return (EXIT_FAILURE);
	if (!(mlx.img->img_ptr = mlx_new_image(mlx.mlx_ptr, WIN_SIZE, WIN_SIZE)))
		return (EXIT_FAILURE);
	mlx.img->data = mlx_get_data_addr(mlx.img->img_ptr,
									  &(mlx.img->bpp),
									  &(mlx.img->sizeline), &(mlx.img->endian));
	draw(&mlx);
	mlx_loop(mlx.mlx_ptr);
	return (EXIT_SUCCESS);
}