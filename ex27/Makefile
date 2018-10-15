# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marezgui <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/11 16:12:35 by marezgui          #+#    #+#              #
#    Updated: 2017/11/11 17:52:03 by marezgui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = 	ft_putchar.c 	\
		ft_putstr.c		\
		ft_display_file.c

all:
	gcc -o $(NAME) $(SRC) -I header.h

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
