/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_n_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 11:16:42 by alegent           #+#    #+#             */
/*   Updated: 2016/07/12 13:47:40 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void					print_n_char(t_pf *pf, char *str, int len)
{
	int					i;

	i = -1;
	while (++i < len)
		print_char(pf, str[i]);
}
