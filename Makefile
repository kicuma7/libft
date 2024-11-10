CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

SRC_F = ./src/
OBJ_F = ./obj/

SRC = 	$(SRC_F)ft_isalnum.c \
		$(SRC_F)ft_isalpha.c \
		$(SRC_F)ft_isdigit.c \
		$(SRC_F)ft_isprint.c \
		$(SRC_F)ft_isascii.c \
		$(SRC_F)ft_toupper.c \
		$(SRC_F)ft_tolower.c

teste:	$(SRC)
	$(CC) $(CFLAGS) $(SRC) main.c -o libft