# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/16 08:20:36 by zsigabi           #+#    #+#              #
#    Updated: 2018/08/27 15:32:03 by zsigabi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC_PATH = srcs
SRC_NAME = ft_atoi.c \
		   ft_countlines.c \
		   ft_isdigit.c \
		   ft_iswhitespace.c \
		   ft_linelen.c \
		   ft_lstadd.c \
		   ft_lstnew.c \
		   ft_memalloc.c \
		   ft_memcpy.c \
		   ft_memdel.c \
		   ft_putstr.c \
		   ft_strdel.c \
		   ft_strjoin.c \
		   ft_strmerge.c \
		   ft_strnew.c \
		   ft_strsub.c \
		   ft_bzero.c \
		   ft_putstr_fd.c \
		   ft_strcat.c \
		   ft_strcpy.c \
		   ft_strlen.c \
		   ft_memset.c \
		   get_next_line.c

OBJ_PATH = objs
OBJ_NAME = $(SRC_NAME:.c=.o)

CC = clang
CFLAGS = -Wall -Werror -Wextra

CPPFLAGS = -I includes

SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "Compilation of Libft:    \033[1;32mOK\033[m"

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@$(CC) $(CFLAGS) -c $< $(CPPFLAGS) -o $@

clean:
	@rm -f $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || true
	@echo "Libft:   Removing Objs"

fclean: clean
	@rm -f $(NAME)
	@echo "Libft:   Removing Libft"

re: fclean all

.PHONY: all, clean, fclean, re
