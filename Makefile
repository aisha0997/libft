# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alaafia <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/20 12:08:39 by alaafia           #+#    #+#              #
#    Updated: 2019/11/01 12:31:30 by alaafia          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMP = gcc -Wextra -Werror -Wall -c
SRC = *.c
OB = *.o
NAME = libft.a

all: $(NAME)

$(NAME):
	$(COMP) $(SRC)
	ar rc $(NAME) $(OB)

clean:
	rm -f $(OB)

fclean: clean
	rm -f $(NAME)

re: fclean all
