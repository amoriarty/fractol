//
//           :::      ::::::::
//         :+:      :+:    :+:     usage.c
//       +:+ +:+         +:+
//     +#+  +:+       +#+          By: Alexandre LEGENT <alegent@student.42.fr>
//   +#+#+#+#+#+   +#+
//        #+#    #+#
//       ###   ###########.fr      Created: 02/08/2016 17:42 by alegent
//

#include "fractol.h"

void 					usage(void)
{
	ft_dprintf(STDERR_FILENO, "%s: usage: ./%s [fractal]\n%s%s%s",
				PROG_NAME, PROG_NAME,
				"Fractals disponible:\n",
				"\t- Mandelbrot\n",
				"\t- Julia\n");
}