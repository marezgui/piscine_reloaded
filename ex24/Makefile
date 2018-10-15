# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marezgui <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/11 12:06:08 by marezgui          #+#    #+#              #
#    Updated: 2017/11/12 14:27:25 by marezgui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = srcs/ft_putchar.c \
	  srcs/ft_putstr.c \
	  srcs/ft_strlen.c \
	  srcs/ft_strcmp.c \
	  srcs/ft_swap.c

HEADER = includes/*.h

all:
	gcc -c $(SRC) -I $(HEADER) && ar -q libft.a *.o

clean:
	rm -f *.o

fclean: clean
	rm -f libft.a

re: fclean all
