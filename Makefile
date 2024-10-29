# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obarais <obarais@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/26 12:57:01 by obarais           #+#    #+#              #
#    Updated: 2024/10/27 14:57:07 by obarais          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_atoi.c	ft_calloc.c	ft_isalpha.c	ft_isdigit.c	ft_memchr.c	ft_memcpy.c	ft_memset.c	ft_strdup.c	ft_strlcpy.c	ft_strncmp.c	ft_strrchr.c	ft_toupper.c ft_bzero.c	ft_isalnum.c	ft_isascii.c	ft_isprint.c	ft_memcmp.c	ft_memmove.c	ft_strchr.c	ft_strlcat.c	ft_strlen.c	ft_strnstr.c	ft_tolower.c main.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	cc $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	-rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re