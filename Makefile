#Variables

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

#Files:
SRC = main.c error.c 
OBJ = ${SRC:.c=.o}

#libraries 

NAME = push_swap
LIBFT = libft.a

#Colors:
RED = "\033[0;31m"
YELLOW = "\033[0;33m"
BLACK = "\033[0m"
MAGENTA= "\033[1;35m"
CYAN = "\033[36m"
GREEN0= "\033[32m"
GREEN1 = "\033[38;5;121m"

#Target:
all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	@echo $(MAGENTA) Making ... 👾
	$(CC) $(CFLAGS)  $(OBJ) $(LIBFT) -o $(NAME)

$(LIBFT): 
	@echo $(YELLOW) Making libft...
	@make -C libft
	@mv libft/libft.a .

clean:
	@echo $(GREEN0) Cleaning ... 🧹 
	@$(RM) $(OBJ) $(LIBFT)
	@make -C libft clean
	@$(RM) $(LIBFT)

fclean: clean
	@echo $(GREEN0) Full cleaning ... 🧹
	@$(RM) $(NAME) 
	@echo $(GREEN1) Done cleaning

re : fclean all

.PHONY: re clean fclean all 