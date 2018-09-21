# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/13 13:09:25 by zsigabi           #+#    #+#              #
#    Updated: 2018/08/17 21:50:55 by zsigabi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = get_next_line.c xymap.c pixel.c map.c draw.c fdf.c \
	  keys.c width.c

RM = rm -f

OBJ = get_next_line.o xymap.o pixel.o map.o draw.o fdf.o \
	  keys.o width.o

$(NAME) :
		make -C libft/ fclean && make -C libft/
		$(CC) $(CFLAGS) -c $(SRC)
		$(CC) $(CFLAGS) $(OBJ) libft/libft.a -L/usr/local/lib/ -I/usr/local/include -lmlx -framework OpenGL -framework AppKit -o fdf

all : $(NAME)

clean :
		$(RM) $(OBJ)
		make -C libft/ clean

fclean : clean
		$(RM) $(NAME)
		make -C libft/ fclean

re : fclean all
