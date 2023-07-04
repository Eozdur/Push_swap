OBJDIR	:= ../../objects
NAME	:= $(OBJDIR)/libft.a
CFLAGS	:= -Wall -Wextra -Werror -I ../../include -c
FILES	:= ft_push_a.c\
	ft_push_b.c\
	ft_reverse_rotate_a.c\
	ft_reverse_rotate_b.c\
	ft_reverse_rotate_r.c\
	ft_rotate_a.c\
	ft_rotate_b.c\
	ft_rotate_r.c\
	ft_swap_a.c\
	ft_swap_b.c\
	ft_swap_s.c\

OBJ		:= $(FILES:%.c=$(OBJDIR)/%.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar -rcs $(NAME) $(OBJ)

$(OBJDIR)/%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJDIR)/ft_*.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
