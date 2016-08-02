//
//           :::      ::::::::
//         :+:      :+:    :+:     init_img.c
//       +:+ +:+         +:+
//     +#+  +:+       +#+          By: Alexandre LEGENT <alegent@student.42.fr>
//   +#+#+#+#+#+   +#+
//        #+#    #+#
//       ###   ###########.fr      Created: 02/08/2016 16:22 by alegent
//

#include "fractol.h"

t_bool						init_img(t_mlx *mlx)
{
	if (!(mlx->img = new_img()))
		return (FALSE);
	if (!(mlx->img->img_ptr = mlx_new_image(mlx->mlx_ptr, WIN_X, WIN_Y)))
		return (FALSE);
	if (!(mlx->img->data = mlx_get_data_addr(mlx->img->img_ptr,
											 &(mlx->img->bpp),
											 &(mlx->img->sizeline),
											 &(mlx->img->endian))))
		return (FALSE);
	return (TRUE);
}