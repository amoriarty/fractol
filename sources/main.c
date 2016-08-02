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

int					main(int ac, char **av)
{
	t_frac			type;

	if (ac != 2)
	{
		ft_dprintf(STDERR_FILENO, "%s: usage: %s [Fractal]\n", av[0], av[0]);
		return (EXIT_FAILURE);
	}
	type = get_frac(av[1]);
	if (type == ERR_FRAC)
	{
		ft_dprintf(STDERR_FILENO, "%s: error: Unrecognized fractal name.\n", av[0]);
		return (EXIT_FAILURE);
	}
	return (init(type));
}