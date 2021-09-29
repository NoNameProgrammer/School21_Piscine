# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egiles <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/12 16:32:43 by egiles            #+#    #+#              #
#    Updated: 2019/08/13 18:34:04 by egiles           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
	  srcs/ft_strlen.c srcs/ft_swap.c

OBJCTS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

HDRS = -I includes/

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC) $(HDRS)
	ar rc $(NAME) $(OBJCTS)
	ranlib $(NAME)
clean:
	/bin/rm -f $(OBJCTS)
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all
