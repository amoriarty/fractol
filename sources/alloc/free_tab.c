//
//           :::      ::::::::
//         :+:      :+:    :+:     free_tab.c
//       +:+ +:+         +:+
//     +#+  +:+       +#+          By: Alexandre LEGENT <alegent@student.42.fr>
//   +#+#+#+#+#+   +#+
//        #+#    #+#
//       ###   ###########.fr      Created: 03/08/2016 15:16 by alegent
//

#include "fractol.h"

void 				free_tab(int **tab, int size)
{
	int 			i;

	i = -1;
	while (++i < size)
		free(tab[i]);
	free(tab);
}