//
//           :::      ::::::::
//         :+:      :+:    :+:     new_img.c
//       +:+ +:+         +:+
//     +#+  +:+       +#+          By: Alexandre LEGENT <alegent@student.42.fr>
//   +#+#+#+#+#+   +#+
//        #+#    #+#
//       ###   ###########.fr      Created: 02/08/2016 12:51 by alegent
//

#include "fractol.h"

t_img						*new_img(void)
{
	t_img					*new;

	if (!(new = (t_img *)malloc(sizeof(t_img))))
		return (NULL);
	new->bpp = 0;
	new->endian = 0;
	new->sizeline = 0;
	new->img_ptr = NULL;
	new->data = NULL;
	return (new);
}