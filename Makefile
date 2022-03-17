# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jperras <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/16 15:58:32 by jperras           #+#    #+#              #
#    Updated: 2022/03/17 09:56:01 by jperras          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libftpushswap.a

SRCS = ft_push_swap.c ft_pushswap_utils.c ft_pushswap_utils1.c ft_pushswap_utils2.c\
	   ft_pushswap_utils3.c  ft_algo2.c ft_check.c ft_pushalgo.c\

PRINTF = printf

LIBF = libft

CC = gcc

CCDB = gcc -g

FLAGS = -Wall -Werror -Wextra 

LIBPF = -L $(PRINTF) -lftprintf

LIBFT = -L $(LIBF) -lft


OBJS = $(SRCS:.c=.o)

INCLUDES = -I./includes

$(NAME) : $(INCLUDES) $(OBJS) 
	make -C $(PRINTF)
	make -C $(LIBF)
	ar -rcs $(NAME) $(OBJS) 

all : $(NAME)

test:
	$(CC) $(FLAGS) $(LIBFT) $(LIBPF) $(INCLUDES) $(SRCS) 	

debug:
	$(CCDB) $(FLAGS) $(LIBPF) $(LIBFT) $(INCLUDES) $(SRCS)

clean :
	rm -rf $(OBJS)
	make clean -C $(PRINTF)
	make clean -C $(LIBF)

fclean : clean
	rm -rf $(NAME)
	make fclean -C $(PRINTF)
	make fclean -C $(LIBF)

re : fclean all

.PHONY : all bonus clean fclean re
