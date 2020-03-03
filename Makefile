# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbarreta <lbarreta@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/22 23:54:41 by lbarreta          #+#    #+#              #
#    Updated: 2020/02/21 02:08:34 by lbarreta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
C_FILE =  ft_isalpha.c ft_memchr.c	ft_putchar_fd.c ft_strchr.c \
	      ft_strlen.c ft_strtrim.c ft_atoi.c ft_isascii.c \
    	  ft_memcmp.c ft_putendl_fd.c ft_strdup.c ft_strmapi.c \
		  ft_substr.c ft_bzero.c ft_isdigit.c \
		  ft_memcpy.c ft_putnbr_fd.c ft_strjoin.c \
		  ft_strncmp.c ft_tolower.c ft_calloc.c ft_isprint.c \
		  ft_memmove.c ft_putstr_fd.c \
		  ft_strlcat.c ft_strnstr.c ft_toupper.c ft_isalnum.c \
		  ft_itoa.c ft_memccpy.c ft_memset.c \
		  ft_split.c ft_strlcpy.c ft_strrchr.c
BONUS_FILE = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
			   ft_lstadd_back.c	ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
			   ft_lstmap.c
H_FILE = libft.h
O_FILE = $(C_FILE:.c=.o)
O_BONUS_FILE = $(BONUS_FILE:.c=.o)
CC_FLAGS = -Wall -Wextra -Werror


all: $(NAME)

$(NAME): $(C_FILE) $(H_FILE)
	gcc $(CC_FLAGS) -c $(C_FILE)
	ar rcs $@ $(O_FILE)

clean:
	/bin/rm -f *.o
	
fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

bonus: $(O_FILE) $(O_BONUS_FILE)
	ar rcs $(NAME) $(O_FILE) $(O_BONUS_FILE)

clear: clean fclean
