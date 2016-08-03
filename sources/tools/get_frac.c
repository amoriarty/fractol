//
//           :::      ::::::::
//         :+:      :+:    :+:     get_frac.c
//       +:+ +:+         +:+
//     +#+  +:+       +#+          By: Alexandre LEGENT <alegent@student.42.fr>
//   +#+#+#+#+#+   +#+
//        #+#    #+#
//       ###   ###########.fr      Created: 02/08/2016 15:11 by alegent
//

#include "fractol.h"

t_frac				get_frac(char *arg)
{
	if (!ft_strcmp(lower_case(arg), "mandelbrot"))
		return (MANDELBROT);
	else if (!ft_strcmp(lower_case(arg), "julia"))
		return (JULIA);
	return (ERR_FRAC);
}