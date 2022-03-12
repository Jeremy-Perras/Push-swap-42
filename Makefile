NAME = Pushswap.a

SRCS = ft_push_swap.c ft_pushswap_utils.c

CC = gcc

CCDB = gcc -g

FLAGS = -Wall -Werror -Wextra 

OBJS = $(SRCS:.c=.o)

$(NAME) : $(OBJS)
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

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all bonus clean fclean re
