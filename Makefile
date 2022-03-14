NAME = libftpushswap.a

SRCS = ft_push_swap.c ft_pushswap_utils.c ft_pushswap_utils2.c ft_pushswap_utils3.c

PRINTF = printf/

FT = libft/

CC = gcc

CCDB = gcc -g

FLAGS = -Wall -Werror -Wextra 

LIBPF = -L $(PRINTF) -lftprintf

LIBFT = -L $(FT) -lft

OBJS = $(SRCS:.c=.o)

INCLUDES = -I./includes

$(NAME) : $(OBJS)
	make -C $(PRINTF)
	make -C $(FT)
	ar -rcs $(NAME) $(OBJS)

all : $(NAME)

test:
	$(CC) $(FLAGS) $(LIBFT) $(LIBPF) $(INCLUDES) $(SRCS) 
	./a.out
	rm -f a.out

debug:
	$(CCDB) $(FLAGS) $(LIBPF) $(LIBFT) $(INCLUDES) $(SRCS)
	lldb ./a.out
	rm -rf a.out a.out.dSYM

clean :
	rm -rf $(OBJS)
	make clean -C $(PRINTF)

fclean : clean
	rm -rf $(NAME)
	make fclean -C $(PRINTF)

re : fclean all

.PHONY : all bonus clean fclean re
