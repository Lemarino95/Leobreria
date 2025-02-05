CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = placeholder.a
OBJ_DIR = obj

SRC_MAIN = ft_placeholder.c


OBJECTS_MAIN = $(SRC_MAIN:%.c=$(OBJ_DIR)/%.o)

OBJECTS = $(OBJECTS_MAIN)

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

all: $(NAME) $(OBJ_DIR) $(LIBFT)
	@echo "Object files created!"

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(NAME):$(OBJECTS)
	@	ar rc $(NAME) $(OBJECTS)

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	@	${CC} -c ${CFLAGS} -I$(LIBFT_DIR) $< -o $@

$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)

clean:
	@echo "Cleaning..."
	@	rm -rf $(OBJECTS) $(OBJ_DIR)
	@	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	@echo "FCleaning..."
	@	rm -rf $(OBJ_DIR) $(NAME)

re: fclean all

.PHONY: all clean fclean re libft
