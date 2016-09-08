/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_cplx.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 11:37:00 by alegent           #+#    #+#             */
/*   Updated: 2016/09/08 11:37:00 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

t_cplx					*new_cplx(void)
{
	t_cplx				*new;

	if (!(new = (t_cplx *)malloc(sizeof(t_cplx))))
		return (NULL);
	new->c_r = 0;
	new->c_i = 0;
	new->z_r = 0;
	new->z_i = 0;
	return (new);
}
