# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nainhaja <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/16 22:20:13 by nainhaja          #+#    #+#              #
#    Updated: 2019/10/23 00:59:42 by nainhaja         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc 

SRC = ft_atoi.c		ft_putchar_fd.c		ft_strlen.c \
ft_bzero.c		ft_putendl_fd.c		ft_strmapi.c \
ft_calloc.c		ft_putnbr_fd.c		ft_strncmp.c \
ft_isalnum.c	ft_putstr_fd.c		ft_strnstr.c \
ft_isalpha.c		ft_memccpy.c		ft_split.c		ft_strrchr.c \
ft_isascii.c		ft_memchr.c		ft_strchr.c		ft_strtrim.c \
ft_isdigit.c		ft_memcmp.c		ft_strdup.c		ft_substr.c \
ft_isprint.c		ft_memcpy.c		ft_strjoin.c		ft_tolower.c \
ft_itoa.c		ft_memmove.c		ft_strlcat.c		ft_toupper.c \
ft_memset.c		ft_strlcpy.c \

FLAGS = -Wall -Wextra -Werror
ARG = -c

OUT = ft_atoi.o		ft_putchar_fd.o		ft_strlen.o \
ft_bzero.o		ft_putendl_fd.o		ft_strmapi.o \
ft_calloc.o		ft_putnbr_fd.o	ft_strncmp.o \
ft_isalnum.o		ft_putstr_fd.o	ft_strnstr.o \
ft_isalpha.o		ft_memccpy.o	ft_split.o		ft_strrchr.o \
ft_isascii.o		ft_memchr.o		ft_strchr.o		ft_strtrim.o \
ft_isdigit.o		ft_memcmp.o		ft_strdup.o		ft_substr.o \
ft_isprint.o		ft_memcpy.o		ft_strjoin.o		ft_tolower.o \
ft_itoa.o		ft_memmove.o		ft_strlcat.o		ft_toupper.o \
ft_memset.o		ft_strlcpy.o \

BON = ft_lstadd_front_bonus.c	ft_lstsize_bonus.c	ft_lstadd_back_bonus.c \
ft_lstnew_bonus.c	ft_lstlast_bonus.c	ft_lstdelone_bonus.c	ft_lstclear_bonus.c \
ft_lstiter_bonus.c	ft_lstmap_bonus.c \

BONO = $(BON:.c=.o)	
all: $(NAME)

$(NAME): 
	$(CC) $(FLAGS) $(ARG) $(SRC)
	ar rc $(NAME) $(OUT)
	ranlib $(NAME)

bonus:
	gcc $(FLAGS) $(ARG) $(BON)
	ar rc $(NAME) $(OUT)

clean:
	rm -f $(OUT) $(BONO)

fclean: clean	
	rm -f $(NAME)

re : fclean all
