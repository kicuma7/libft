# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/20 19:11:38 by jquicuma          #+#    #+#              #
#    Updated: 2025/02/20 23:22:43 by jquicuma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BGREEN = \001\033[1;32m\002
BYELLOW = \001\033[1;96m\002

CC = cc
CFLAGS = -Wall -Wextra -Werror -g3
NAME = libft.a
AR = ar rc
RN = ranlib
RM = rm -rf

SRC = ./src/
OBJ = ./.obj/

FILES =	$(addprefix is/, ft_isalpha \
		ft_isdigit \
		ft_isalnum \
		ft_isascii \
		ft_isprint)

FILES +=	$(addprefix to/, ft_toupper \
			ft_tolower)

FILES +=	$(addprefix str/, ft_strlen \
			ft_strlcpy \
			ft_strlcat \
			ft_strchr \
			ft_strrchr \
			ft_strncmp \
			ft_strnstr)

SRCS = $(addprefix $(SRC), $(addsuffix .c, $(FILES)))
OBJS = $(addprefix $(OBJ), $(addsuffix .o, $(FILES)))

$(NAME): $(OBJS)
	@$(AR) $@ $^
	@$(RN) $@
	@echo "$(BGREEN) Biblioteca $@ gerada com sucesso"

all: $(NAME)

$(OBJ)%.o: $(SRC)%.c
	@mkdir -p $(OBJ) $(OBJ)to $(OBJ)str $(OBJ)is
	@echo "$(BYELLOW) Compilando $<"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: clean all

run: $(NAME)
	$(CC) $(CFLAGS) main.c -L. -lft -o bin
	./bin

.PHONY: clean fclean re all
