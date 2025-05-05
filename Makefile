# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucpardo <lucpardo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/05 19:31:51 by lucpardo          #+#    #+#              #
#    Updated: 2025/05/05 19:31:56 by lucpardo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
CC = cc
AR = ar rc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRCS =	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_strdup.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_calloc.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_substr.c \
	ft_substr.c \
	ft_strtrim.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)
	@echo "libft.a built!"

%.o: %.c libft.h # Make .o depend on .c AND the header file libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	@echo "objects vacuumed!"

fclean: clean
	rm -f $(NAME)
	@echo "libft.a is gone!"

re: fclean all

.PHONY: all clean fclean re
