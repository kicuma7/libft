NAME = libft.a


CC = cc
CFLAGS = -Wall -Wextra -Werror
RN = ranlib
AR = ar rc
RM = rm -rf
BUILD_PRINT = @echo "\e[1;34mBuilding\e[0m \033[0;33m$<\033[0m"
DONE_PRINT = @echo "\e[1;34m$@\033[0m \e[1;32mSuccessful Builded\033[0m"

SRC = ./src/
OBJ = ./.obj/

FILES =	$(addprefix alloc/, ft_calloc)

FILES +=	$(addprefix conver/, ft_atoi \
			ft_itoa)

FILES +=	$(addprefix fd/, ft_putchar_fd \
			ft_putendl_fd \
			ft_putnbr_fd \
			ft_putstr_fd)

FILES +=	$(addprefix is/, ft_isalnum \
			ft_isalpha \
			ft_isascii \
			ft_isdigit \
			ft_isprint)

FILES +=	$(addprefix lst/, ft_lstadd_back \
			ft_lstadd_front \
			ft_lstclear \
			ft_lstdelone \
			ft_lstiter \
			ft_lstlast \
			ft_lstmap \
			ft_lstnew \
			ft_lstsize)

FILES +=	$(addprefix mem/, ft_bzero \
			ft_memchr \
			ft_memcmp \
			ft_memcpy \
			ft_memmove \
			ft_memset)

FILES +=	$(addprefix str/, ft_split \
			ft_strchr \
			ft_strdup \
			ft_striteri \
			ft_strjoin \
			ft_strlcat \
			ft_strlcpy \
			ft_strlen \
			ft_strmapi \
			ft_strncmp \
			ft_strnstr \
			ft_strrchr \
			ft_strtrim \
			ft_substr)

FILES +=	$(addprefix to/, ft_tolower \
			ft_toupper)

SRCS = $(addsuffix .c, $(addprefix $(SRC), $(FILES)))
OBJS = $(addsuffix .o, $(addprefix $(OBJ), $(FILES)))

$(NAME): $(OBJS)
	@$(AR) $@ $<
	@$(RN) $@
	@$(DONE_PRINT)

$(OBJ)%.o: $(SRC)%.c
	@mkdir -p $(OBJ)
	@mkdir -p $(OBJ)alloc $(OBJ)conver $(OBJ)fd $(OBJ)is $(OBJ)lst \
	$(OBJ)mem $(OBJ)str $(OBJ)to
	@$(CC) $(CFLAGS) -c $< -o $@
	$(BUILD_PRINT)

all: $(NAME)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
