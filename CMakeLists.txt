CMAKE_MINIMUM_REQUIRED(VERSION 3.3)
PROJECT(fractol)

#COMPILERS CONFIGURATION
SET(CMAKE_C_COMPILER "/usr/bin/clang")
SET(CMAKE_C_FLAGS "-Wall -Wextra -Werror")

#EXECUTABLE FILES
SET(EXEC_FILE
		sources/main.c
		sources/draw/put_pixel.c
		sources/alloc/new_img.c
		sources/tools/lower_case.c
		sources/main/fractol.c
		sources/tools/get_frac.c
		sources/init/init_mlx.c
		sources/init/init_img.c
		sources/alloc/new_coor.c
		sources/alloc/new_cplx.c
		sources/alloc/new_fgr.c
		sources/tools/usage.c
		sources/alloc/free_img.c
		sources/alloc/free_fgr.c
		sources/draw/draw_mandelbrot.c
		sources/draw/draw_julia.c
		sources/init/setting.c sources/draw/draw_buddhabrot.c sources/alloc/new_tab.c sources/alloc/free_tab.c)

#INCLUDES DIRECTORIES
INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR})
INCLUDE_DIRECTORIES(libft)
INCLUDE_DIRECTORIES(minilibx_macos)
INCLUDE_DIRECTORIES(ft_printf)

#LIBFT MAKEFILE CALL
ADD_CUSTOM_COMMAND(
		OUTPUT ${PROJECT_SOURCE_DIR}/libft/libft.a
		COMMAND make
		WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}/libft
)
ADD_CUSTOM_TARGET(
		libft
		DEPENDS ${PROJECT_SOURCE_DIR}/libft/libft.a
)

#FT_PRINTF MAKEFILE CALL
ADD_CUSTOM_COMMAND(
		OUTPUT ${PROJECT_SOURCE_DIR}/ft_printf/libftprintf.a
		COMMAND make
		WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}/ft_printf
)
ADD_CUSTOM_TARGET(
		ft_printf
		DEPENDS ${PROJECT_SOURCE_DIR}/ft_printf/libftprintf.a
)

#MINILIBX MAKEFILE CALL
ADD_CUSTOM_COMMAND(
		OUTPUT ${PROJECT_SOURCE_DIR}/minilibx_macos/libmlx.a
		COMMAND make
		WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}/minilibx_macos
)
ADD_CUSTOM_TARGET(
		libmlx
		DEPENDS ${PROJECT_SOURCE_DIR}/minilibx_macos/libmlx.a
)

#MACOS X FRAMEWORK
FIND_LIBRARY(OPENGL OpenGL)
FIND_LIBRARY(APPKIT AppKit)

#EXECUTABLES
ADD_EXECUTABLE(fractol ${EXEC_FILE})

#DEPENDENCIES
ADD_DEPENDENCIES(fractol libft)
ADD_DEPENDENCIES(fractol ft_printf)
ADD_DEPENDENCIES(ft_printf libft)
ADD_DEPENDENCIES(fractol libmlx)

#LIBRARIES LINKING
TARGET_LINK_LIBRARIES(fractol ${PROJECT_SOURCE_DIR}/libft/libft.a)
TARGET_LINK_LIBRARIES(fractol ${PROJECT_SOURCE_DIR}/ft_printf/libftprintf.a)
TARGET_LINK_LIBRARIES(fractol ${PROJECT_SOURCE_DIR}/minilibx_macos/libmlx.a)
TARGET_LINK_LIBRARIES(fractol ${OPENGL})
TARGET_LINK_LIBRARIES(fractol ${APPKIT})
