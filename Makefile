# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/20 19:11:38 by jquicuma          #+#    #+#              #
#    Updated: 2025/02/20 20:21:40 by jquicuma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BGREEN = \001\033[1;32m\002
BYELLOW = \001\033[1;96m\002

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
AR = ar rc
RN = ranlib
RM = rm -rf

SRC = ./src/
OBJ = ./.obj/

FILES =	ft_isalpha \
		ft_isdigit \
		ft_isalnum \
		ft_isascii \
		ft_isprint \
		ft_toupper \
		ft_tolower

SRCS = $(addprefix $(SRC), $(addsuffix .c, $(FILES)))
OBJS = $(addprefix $(OBJ), $(addsuffix .o, $(FILES)))

$(NAME): $(OBJS)
	@$(AR) $@ $^
	@$(RN) $@
	@echo "$(BGREEN) Biblioteca $@ gerada com sucesso"

all: $(NAME)

$(OBJ)%.o: $(SRC)%.c
	@mkdir -p $(OBJ)
	@echo "$(BYELLOW) Compilando $<"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: clean all

run: $(NAME)
	$(CC) $(CFLAGS) -g3 main.c -L. -lft -o bin

.PHONY: clean fclean re all
