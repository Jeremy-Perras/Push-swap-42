NAME = libftpushswap.a

SRCS = ft_push_swap.c ft_pushswap_utils.c ft_pushswap_utils2.c ft_pushswap_utils3.c

PRINTF = printf

CC = gcc

CCDB = gcc -g

FLAGS = -Wall -Werror -Wextra 

LIBPF = -llibftprintf.a

OBJS = $(SRCS:.c=.o)

$(NAME) : $(OBJS)
	make -C $(PRINTF)
	cp printf/libftprintf.a .
	#mv libft.a $(NAME)	
	ar -rcs $(NAME) $(OBJS)

all : $(NAME)

test:
	$(CC) $(FLAGS) $(SRCS) 	
	./a.out
	rm -f a.out

debug:
	$(CCDB) $(FLAGS) $(SRCS)
	lldb ./a.out
	rm -rf a.out a.out.dSYM

clean :
	rm -rf $(OBJS)
	@make clean -C $(PRINTF)

fclean : clean
	rm -rf $(NAME)
	$(RM) -f $(PRINTF)/libftprintf.a
re : fclean all

.PHONY : all bonus clean fclean re
