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
	t_mlx			mlx;
	t_frac			type;

	if (ac != 2 || ((type = get_frac(av[1])) == ERR_FRAC))
	{
		usage();
		return (EXIT_FAILURE);
	}
	if (init_mlx(&mlx) == FALSE)
		return (EXIT_FAILURE);
	return (fractol(&mlx, type));
}
