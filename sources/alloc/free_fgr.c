//
//           :::      ::::::::
//         :+:      :+:    :+:     free_fgr.c
//       +:+ +:+         +:+
//     +#+  +:+       +#+          By: Alexandre LEGENT <alegent@student.42.fr>
//   +#+#+#+#+#+   +#+
//        #+#    #+#
//       ###   ###########.fr      Created: 02/08/2016 17:54 by alegent
//

#include "fractol.h"

void 					free_fgr(t_fgr *fgr)
{
	free(fgr->p0);
	free(fgr->p1);
	free(fgr);
}