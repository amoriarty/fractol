//
//           :::      ::::::::
//         :+:      :+:    :+:     new_tab.c
//       +:+ +:+         +:+
//     +#+  +:+       +#+          By: Alexandre LEGENT <alegent@student.42.fr>
//   +#+#+#+#+#+   +#+
//        #+#    #+#
//       ###   ###########.fr      Created: 03/08/2016 15:14 by alegent
//

#include "fractol.h"

int 				**new_tab(int x_size, int y_size)
{
	int 			x;
	int 			y;
	int 			**tab;

	x = -1;
	if (!(tab = (int **)malloc(sizeof(int *) * x_size)))
		return (NULL);
	while (++x < x_size)
	{
		y = -1;
		if (!(tab[x] = (int *)malloc(sizeof(int) * y_size)))
			return (NULL);
		while (++y < y_size)
			tab[x][y] = 0;
	}
	return (tab);
}