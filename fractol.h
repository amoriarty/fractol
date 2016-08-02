//
//           :::      ::::::::
//         :+:      :+:    :+:     fractol.h
//       +:+ +:+         +:+
//     +#+  +:+       +#+          By: Alexandre LEGENT <alegent@student.42.fr>
//   +#+#+#+#+#+   +#+
//        #+#    #+#
//       ###   ###########.fr      Created: 02/08/2016 11:54 by alegent
//

#ifndef FRACTOL_H
# define FRACTOL_H
# include "libft.h"
# include "ft_printf.h"
# include "mlx.h"

/*
** DEFINES & TYPEDEF
*/

# define WIN_SIZE 480
# define WIN_TITLE "Fractol"

typedef enum e_frac			t_frac;
typedef struct s_mlx		t_mlx;
typedef struct s_img		t_img;
typedef struct s_coor		t_coor;

/*
** DATA STRUCTURE
*/

enum 						e_frac
{
	ERR_FRAC,
	MANDELBROT,
	JULIA
};

struct						s_coor
{
	int 					x;
	int 					y;
};

struct 						s_img
{
	void					*img_ptr;
	char 					*data;
	int 					bpp;
	int 					sizeline;
	int 					endian;
};

struct						s_mlx
{
	void					*mlx_ptr;
	void 					*win_ptr;
	t_img					*img;
};

/*
** ALLOC FUNCTIONS PROTOTYPES
*/

t_img						*new_img(void);

/*
** DRAW FUNCTIONS PROTOTYPES
*/

void						put_pixel(t_mlx *mlx, t_coor *pixel, int color);

/*
** TOOLS FUNCTIONS PROTOTYPES
*/

char 						*lower_case(char *str);

#endif
