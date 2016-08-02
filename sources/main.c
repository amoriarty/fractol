//
//           :::      ::::::::
//         :+:      :+:    :+:     main.c
//       +:+ +:+         +:+
//     +#+  +:+       +#+          By: Alexandre LEGENT <alegent@student.42.fr>
//   +#+#+#+#+#+   +#+
//        #+#    #+#
//       ###   ###########.fr      Created: 28/07/2016 11:45 by alegent
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

int					main(int ac, char **av)
{
	if (ac != 2)
	{
		ft_dprintf(STDERR_FILENO, "%s: usage: %s [Fractal]\n", av[0], av[0]);
		return (EXIT_FAILURE);
	}
	if (get_frac(av[1]) == ERR_FRAC)
	{
		ft_dprintf(STDERR_FILENO, "%s: error: Unrecognized fractal name.\n", av[0]);
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}