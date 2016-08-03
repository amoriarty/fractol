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
# define PROG_NAME "fractol"

/*
** COLOR DEFINES
*/

# define WHITE 0xFFFFFF
# define BLUE 0x0000FF
# define GREEN 0x00FF00
# define YELLOW 0xEEB422
# define MARINE 0x33CCFF
# define PURPLE 0x6600CC
# define ORANGE 0x00FFA500
# define RED 0xFF0000

/*
** DEFINES & TYPEDEF
*/

# define WIN_X 1080
# define WIN_Y 640
# define WIN_TITLE "Fractol"

typedef enum e_frac			t_frac;
typedef struct s_mlx		t_mlx;
typedef struct s_img		t_img;
typedef struct s_coor		t_coor;
typedef struct s_fgr		t_fgr;
typedef struct s_cplx		t_cplx;

/*
** DATA STRUCTURE
*/

enum 						e_frac
{
	ERR_FRAC,
	MANDELBROT,
	JULIA,
	BUDDHABROT
};

struct						s_coor
{
	double 					x;
	double					y;
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
	t_fgr					*fractal;
};

struct						s_cplx
{
	double 					c_r;
	double 					c_i;
	double 					z_r;
	double 					z_i;
};

struct 						s_fgr
{
	t_frac					type;
	int 					iter;
	double					zoom;
	t_coor					*p0;
	t_coor					*p1;
	t_cplx					*cplx;
};

/*
** MAIN FUNCTIONS PROTOTYPES
*/

int 						fractol(t_mlx *mlx, t_frac type);

/*
** ALLOC FUNCTIONS PROTOTYPES
*/

t_img						*new_img(void);
t_cplx						*new_cplx(void);
t_coor						*new_coor(void);
t_fgr						*new_fgr(t_frac type);
int 						**new_tab(int x_size, int y_size);
void						free_fgr(t_fgr *fgr);
void						free_img(t_mlx *mlx);
void						free_tab(int **tab, int size);

/*
** INIT FUNCTIONS PROTOTYPES
*/

t_bool						init_mlx(t_mlx *mlx);
t_bool						init_img(t_mlx *mlx);
void						init_coor(t_coor *coor);
void						init_cplx(t_cplx *cplx);

/*
** SETTING FUNCTIONS PROTOTYPES (INIT DIR)
*/

void						set_mandelbrot(t_mlx *mlx);
void						set_julia(t_mlx *mlx);
void 						set_buddhabrot(t_mlx *mlx);

/*
** DRAW FUNCTIONS PROTOTYPES
*/

void						put_pixel(t_mlx *mlx, t_coor *pixel, int color);
void 						draw_mandelbrot(t_mlx *mlx);
void 						draw_julia(t_mlx *mlx);
void 						draw_buddhabrot(t_mlx *mlx);

/*
** TOOLS FUNCTIONS PROTOTYPES
*/

char 						*lower_case(char *str);
t_frac						get_frac(char *arg);
void 						usage(void);

#endif
