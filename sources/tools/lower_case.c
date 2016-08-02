//
//           :::      ::::::::
//         :+:      :+:    :+:     lower_case.cpp
//       +:+ +:+         +:+
//     +#+  +:+       +#+          By: Alexandre LEGENT <alegent@student.42.fr>
//   +#+#+#+#+#+   +#+
//        #+#    #+#
//       ###   ###########.fr      Created: 02/08/2016 13:13 by alegent
//

#include "fractol.h"

char 						*lower_case(char *str)
{
	int 					i;

	i = -1;
	while (str[++i])
		str[i] = ft_tolower(str[i]);
	return (str);
}