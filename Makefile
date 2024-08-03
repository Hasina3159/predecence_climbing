NAME        = minishell

CC          = cc
CFLAGS      = -Wall -Wextra -Werror
RM          = rm -rf
MKDIR_P     = mkdir -p

SRCS_PATH   = ./srcs
OBJS_PATH   = ./objs

SRCS        = $(shell find $(SRCS_PATH) -name "*.c")
OBJS        = $(patsubst $(SRCS_PATH)/%.c,$(OBJS_PATH)/%.o,$(SRCS))

$(OBJS_PATH)/%.o: $(SRCS_PATH)/%.c
	$(MKDIR_P) $(dir $@)
	$(CC) -c $< -o $@

$(NAME): $(OBJS)
	make -C libft
	$(CC) $(OBJS) -o $(NAME) -L./libft -lft -lm

all: $(NAME)

clean:
	$(RM) $(OBJS)
	make -C libft clean

fclean: clean
	$(RM) $(NAME)
	make -C libft fclean

re: fclean all

.PHONY: all clean fclean re
