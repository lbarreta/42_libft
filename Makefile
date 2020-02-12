# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbarreta <lbarreta@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/22 23:54:41 by lbarreta          #+#    #+#              #
#    Updated: 2020/01/28 22:08:54 by lbarreta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
C_FILE = $(wildcard *.c)
H_FILE = $(wildcard *.h)
O_FILE = $(C_FILE:.c=.o)
CC_FLAGS = -Wall -Wextra -Werror


all: $(NAME)

$(NAME):
	gcc $(CC_FLAGS) -c $(C_FILE)
	ar rcs $@ $(O_FILE)

clean:
	/bin/rm -f *.o
	
fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
