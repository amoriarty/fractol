//
//           :::      ::::::::
//         :+:      :+:    :+:     new_fgr.c
//       +:+ +:+         +:+
//     +#+  +:+       +#+          By: Alexandre LEGENT <alegent@student.42.fr>
//   +#+#+#+#+#+   +#+
//        #+#    #+#
//       ###   ###########.fr      Created: 02/08/2016 17:31 by alegent
//

#include "fractol.h"

t_fgr					*new_fgr(t_frac type)
{
	t_fgr				*new;

	if (!(new = (t_fgr *)malloc(sizeof(t_fgr))))
		return (NULL);
	if (!(new->p0 = new_coor()))
		return (NULL);
	if (!(new->p1 = new_coor()))
		return (NULL);
	if (!(new->cplx = new_cplx()))
		return (NULL);
	new->type = type;
	new->iter = 0;
	new->zoom = 0;
	return (new);
}