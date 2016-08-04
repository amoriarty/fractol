# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alegent <alegent@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/02/13 12:17:39 by alegent           #+#    #+#              #
#    Updated: 2016/07/19 12:39:01 by alegent          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= fractol

SRC_PATH= sources/
SRC_NAME= main.c \
		  alloc/free_fgr.c \
		  alloc/free_img.c \
		  alloc/new_coor.c \
		  alloc/new_cplx.c \
		  alloc/new_fgr.c \
		  alloc/new_img.c \
		  draw/draw_julia.c \
		  draw/draw_mandelbrot.c \
		  draw/draw_sword.c \
		  draw/put_pixel.c \
		  events/julia_hook.c \
		  events/key_hook.c \
		  events/mouse_hook.c \
		  init/init_img.c \
		  init/init_mlx.c \
		  init/setting.c \
		  tools/get_frac.c \
		  tools/lower_case.c \
		  tools/usage.c

SRC= $(addprefix $(SRC_PATH), $(SRC_NAME))

OBJ_PATH= obj/
OBJ_NAME= $(SRC_NAME:.c=.o)
OBJ= $(addprefix $(OBJ_PATH), $(OBJ_NAME))

GCC= clang -Wall -Wextra -Werror
GOPT = -g -O0

INC_LIB= libft/
INC_PATH= .
INC= -I $(INC_LIB) -I $(INC_PATH) -I ft_printf/ -I minilibx_macos

LIB= libft/libft.a ft_printf/libftprintf.a minilibx_macos/libmlx.a
FRAMEWORK= -framework OpenGL -framework AppKit

all: $(NAME)

$(NAME): $(OBJ)
	@make -C $(INC_LIB)
	@make -C ft_printf
	@make -C minilibx_macos
	@$(GCC) $(GOPT) $(LIB) $(INC) $(FRAMEWORK) -o $(NAME) $(OBJ)
	@echo "Your program is ready to go !"

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir -p $(OBJ_PATH)/{alloc,draw,events,init,tools}
	$(GCC) $(GOPT) $(INC) -o $@ -c $<

clean:
	@make -C $(INC_LIB) clean
	@make -C ft_printf clean
	@make -C minilibx_macos clean
	@rm -rf $(OBJ)
	@rm -rf $(OBJ_PATH)
	@echo "Object files has been deleted"

fclean: clean
	@make -C $(INC_LIB) fclean
	@make -C ft_printf fclean
	@rm -rf $(SUBNAME)
	@rm -rf $(NAME)
	@rm -rf main_test show_test 2> /dev/null
	@echo "Librairy has been deleted"

re: fclean all

.PHONY: clean fclean re norme

