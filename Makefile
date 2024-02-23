NAME = so_long
CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIBFT_DIR = ./my_libft/
LIBFT = $(LIBFT_DIR)libft.a
OBJ_DIR = ./obj/
INC_DIR = ./includes/



SRC_FILES = $(addprefix src/,main.c \
	handle_error.c \
	ft_init_map.c \
	ft_handle_args.c \
	ft_check_map.c)

OBJ_FILES = $(SRC_FILES:src/%.c=$(OBJ_DIR)%.o)

CFLAGS += -I$(INC_DIR)

all: pre-build $(OBJ_DIR) $(NAME)

pre-build:
	@clear
	@echo "Building $(NAME)..."

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o: src/%.c
	@echo "Compiling $<..."
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(LIBFT) $(OBJ_FILES)
	@echo "Linking $(NAME)..."
	@$(CC) $(OBJ_FILES) -L$(LIBFT_DIR) -lft -o $(NAME)
	@echo "Done!"

$(LIBFT):
	@echo "Building $(LIBFT)..."
	@make -C $(LIBFT_DIR)

clean:
	@echo "Cleaning $(NAME)..."
	@rm -rf $(OBJ_DIR)
	@make -C $(LIBFT_DIR) clean

fclean: clean
	@echo "Full cleaning $(NAME)..."
	@rm -f $(NAME)
	@make -C $(LIBFT_DIR) fclean

re: fclean all
