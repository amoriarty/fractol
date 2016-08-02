//
//           :::      ::::::::
//         :+:      :+:    :+:     new_coor.c
//       +:+ +:+         +:+
//     +#+  +:+       +#+          By: Alexandre LEGENT <alegent@student.42.fr>
//   +#+#+#+#+#+   +#+
//        #+#    #+#
//       ###   ###########.fr      Created: 02/08/2016 17:27 by alegent
//

#include "fractol.h"

t_coor						*new_coor(void)
{
	t_coor					*new;

	if (!(new = (t_coor *)malloc(sizeof(t_coor))))
		return (NULL);
	new->x = 0;
	new->y = 0;
	return (new);
}