/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usage.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 11:39:06 by alegent           #+#    #+#             */
/*   Updated: 2016/09/08 11:42:01 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void					usage(void)
{
	ft_dprintf(STDERR_FILENO, "%s: usage: ./%s [fractal]\n%s%s%s%s",
				PROG_NAME, PROG_NAME,
				"Fractals disponible:\n",
				"\t- Mandelbrot\n",
				"\t- Julia\n",
				"\t- Sword\n");
}
