# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alaafia <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/20 12:08:39 by alaafia           #+#    #+#              #
#    Updated: 2019/11/05 17:58:16 by alaafia          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RM = rm -rf

NAME = libft.a

SRC = ft_atoi.c			\
	  ft_bzero.c		\
	  ft_calloc.c		\
	  ft_isalnum.c		\
	  ft_isalpha.c		\
	  ft_isascii.c		\
	  ft_isdigit.c		\
	  ft_isprint.c		\
	  ft_itoa.c			\
	  ft_memccpy.c		\
	  ft_memchr.c		\
	  ft_memcmp.c		\
	  ft_memcpy.c		\
	  ft_memmove.c		\
	  ft_memset.c		\
	  ft_putchar_fd.c	\
	  ft_putendl_fd.c	\
	  ft_putnbr_fd.c	\
	  ft_putstr_fd.c	\
	  ft_split.c		\
	  ft_strchr.c		\
	  ft_strdup.c		\
	  ft_strjoin.c		\
	  ft_strlcat.c		\
	  ft_strlcpy.c		\
	  ft_strlen.c		\
	  ft_strmapi.c		\
	  ft_strncmp.c		\
	  ft_strnstr.c		\
	  ft_strrchr.c		\
	  ft_strtrim.c		\
	  ft_substr.c		\
	  ft_tolower.c		\
	  ft_toupper.c		\

OB = $(SRC:.c=.o)
OB_BONUS = $(BONUS:.c=.o)
CC = gcc -Wextra -Werror -Wall

BONUS =		ft_lstadd_back_bonus.c	\
			ft_lstadd_front_bonus.c	\
			ft_lstlast_bonus.c		\
			ft_lstnew_bonus.c		\
			ft_lstsize_bonus.c		\

all: $(NAME)

$(NAME): $(SRC) $(OB) libft.h
	ar rc $(NAME) $(OB)

clean:
	$(RM) $(OB) $(OB_BONUS)

fclean: clean
	$(RM) $(NAME)

re : fclean all

bonus : $(BONUS) $(OB_BONUS)
	ar rc $(NAME) $(OB) $(OB_BONUS)
