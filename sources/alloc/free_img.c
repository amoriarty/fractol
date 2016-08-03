//
//           :::      ::::::::
//         :+:      :+:    :+:     free_img.c
//       +:+ +:+         +:+
//     +#+  +:+       +#+          By: Alexandre LEGENT <alegent@student.42.fr>
//   +#+#+#+#+#+   +#+
//        #+#    #+#
//       ###   ###########.fr      Created: 02/08/2016 17:51 by alegent
//

#include "fractol.h"

void 				free_img(t_mlx *mlx)
{
	mlx_destroy_image(mlx->mlx_ptr, mlx->img->img_ptr);
	free(mlx->img);
}