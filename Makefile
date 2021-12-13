NAME    := libftprintf.a
COMPILER:= gcc
CFLAGS    := -Wall -Wextra -Werror -MMD -MP
LIBS    := Libft/libft.a
INCLUDE    := -I./include
SRCS_DIR:= ./src
SRCS    := ft_print_base10.c \
			ft_print_base16.c \
			ft_print_char.c \
			ft_print_ptr.c \
			ft_printf.c
OBJS_DIR:= ./obj
OBJS    := $(addprefix $(OBJS_DIR)/, $(notdir $(SRCS:.c=.o)))
DEPS    := $(OBJS:.o=.d)

$(NAME): $(OBJS)
			cp $(LIBS) $(NAME)
			ar rsc $@ $^ 

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c
	mkdir -p $(OBJS_DIR)
	$(COMPILER) $(CFLAGS) $(INCLUDE)  -o $@ -c $<

all: clean $(NAME)

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re debug