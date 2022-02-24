# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbahraou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/21 07:51:03 by cbahraou          #+#    #+#              #
#    Updated: 2022/02/23 21:53:11 by cbahraou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_bzero.c  ft_isalnum.c ft_isascii.c ft_isprint.c ft_strchr.c \
		ft_strlcpy.c ft_strncmp.c ft_strrchr.c ft_toupper.c ft_atoi.c \
		ft_calloc.c  ft_isalpha.c ft_isdigit.c ft_memchr.c ft_memcpy.c \
		ft_memset.c  ft_strlen.c  ft_strnstr.c ft_tolower.c ft_memmove.c ft_putendl_fd.c \
		ft_strlcat.c ft_strdup.c ft_substr.c ft_strjoin.c ft_itoa.c ft_putnbr_fd.c\
		ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_strtrim.c \
		ft_memcmp.c ft_split.c


OBJS = $(SRCS:.c=.o)

HEADER = libft.h
CFLAGS = -Wall -Wextra -Werror
CC = gcc

all: $(NAME)

$(NAME)	:$(HEADER) $(OBJS)
	
	ar -rsc $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME) 
re: fclean all 
		
.PHONY: fclean clean all re bonus
