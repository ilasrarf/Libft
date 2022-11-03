# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilasrarf <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/27 05:00:12 by ilasrarf          #+#    #+#              #
#    Updated: 2022/11/03 14:41:09 by ilasrarf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES_O = ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strnstr.c \
		ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strmapi.c ft_strdup.c ft_calloc.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_striteri.c ft_putnbr_fd.c ft_split.c ft_itoa.c

FILES_B_O = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

FILES_O = ft_memset.o ft_bzero.o ft_memcpy.o ft_memmove.o ft_memchr.o ft_memcmp.o ft_strlen.o ft_strlcpy.o ft_strlcat.o ft_strchr.o ft_strrchr.o ft_strnstr.o \
		ft_strncmp.o ft_atoi.o ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_toupper.o ft_tolower.o ft_strmapi.o ft_strdup.o ft_calloc.o \
		ft_substr.o ft_strjoin.o ft_strtrim.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_striteri.o ft_putnbr_fd.o ft_split.o ft_itoa.o

FILES_B_O = ft_lstnew.o ft_lstadd_front.o ft_lstsize.o ft_lstlast.o ft_lstadd_back.o ft_lstdelone.o ft_lstclear.o ft_lstiter.o ft_lstmap.o

NAME = libft.a
CC = cc
FLAGS = -Wall -Wextra -Werror
AR = ar rc
RM = rm -f

all: ${NAME}

%.o: %.c libft.h
	${CC} ${FLAGS} -c $<

${NAME}: ${FILES_O} libft.h
	${AR} ${NAME} ${FILES_O}

bonus: ${NAME} $(FILES_B_O)
	${AR} ${NAME} $(FILES_B_O)

clean:
	${RM} ${FILES_O} ${FILES_B_O}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all fclean re clean