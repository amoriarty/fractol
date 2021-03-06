/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   upcase_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 11:18:34 by alegent           #+#    #+#             */
/*   Updated: 2016/07/12 11:24:15 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char					*upcase_str(char *str)
{
	int					i;

	i = -1;
	while (str[++i])
	{
		if (islower_case(str[i]))
			str[i] -= 32;
	}
	return (str);
}
