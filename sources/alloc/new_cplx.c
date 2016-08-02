//
//           :::      ::::::::
//         :+:      :+:    :+:     new_cplx.c
//       +:+ +:+         +:+
//     +#+  +:+       +#+          By: Alexandre LEGENT <alegent@student.42.fr>
//   +#+#+#+#+#+   +#+
//        #+#    #+#
//       ###   ###########.fr      Created: 02/08/2016 17:28 by alegent
//

#include "fractol.h"

t_cplx					*new_cplx(void)
{
	t_cplx				*new;

	if (!(new = (t_cplx *)malloc(sizeof(t_cplx))))
		return (NULL);
	new->c_r = 0;
	new->c_i = 0;
	new->z_r = 0;
	new->z_i = 0;
	return (new);
}