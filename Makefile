# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jperras <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/16 15:58:32 by jperras           #+#    #+#              #
#    Updated: 2022/03/16 16:04:12 by jperras          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_push_swap.c ft_pushswap_utils.c ft_pushswap_utils1.c ft_pushswap_utils2.c\
	   ft_pushswap_utils3.c  ft_algo2.c ft_check.c ft_pushalgo.c\

PRINTF = printf/

CC = gcc

CCDB = gcc -g

FLAGS = -Wall -Werror -Wextra 

LIBPF = -llibftprintf.a

LIBPF = -L $(PRINTF) -lftprintf

OBJS = $(SRCS:.c=.o)

$(NAME) : $(OBJS)
	make -C $(PRINTF)
	cp printf/libftprintf.a .
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
	make clean -C $(LIBFT)

fclean : clean
	rm -rf $(NAME)
	make fclean -C $(PRINTF)
	make fclean -C $(LIBFT)

re : fclean all

.PHONY : all bonus clean fclean re
