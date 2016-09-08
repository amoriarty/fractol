/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_frac.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 11:38:54 by alegent           #+#    #+#             */
/*   Updated: 2016/09/08 11:38:55 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

t_frac				get_frac(char *arg)
{
	if (!ft_strcmp(lower_case(arg), "mandelbrot"))
		return (MANDELBROT);
	else if (!ft_strcmp(lower_case(arg), "julia"))
		return (JULIA);
	else if (!ft_strcmp(lower_case(arg), "sword"))
		return (SWORD);
	return (ERR_FRAC);
}
