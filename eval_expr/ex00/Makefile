# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egiles <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/15 16:19:14 by egiles            #+#    #+#              #
#    Updated: 2019/08/18 22:22:16 by egiles           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

SRC = -I /srcs/

HDR = ft_lib.h

OBJCTS = *.o

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC) $(HDR)
	gcc -Wall -Wextra -Werror -o $(NAME) $(OBJCTS)
clean:
	/bin/rm -f $(OBJCTS)
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all
