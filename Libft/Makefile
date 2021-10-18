# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bomoon <bomoon@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/30 17:45:18 by bomoon            #+#    #+#              #
#    Updated: 2021/06/07 18:05:30 by bomoon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

INCLUDES = libft/libft.h

SRCS = 			ft_memset.c 		\
				ft_strrchr.c 		\
				ft_bzero.c 			\
				ft_strnstr.c 		\
				ft_memcpy.c 		\
				ft_strncmp.c 		\
				ft_memccpy.c 		\
				ft_atoi.c 			\
				ft_memmove.c 		\
				ft_isalpha.c 		\
				ft_memchr.c 		\
				ft_isdigit.c 		\
				ft_memcmp.c 		\
				ft_isalnum.c 		\
				ft_strlen.c 		\
				ft_isascii.c 		\
				ft_strlcpy.c 		\
				ft_isprint.c 		\
				ft_strlcat.c 		\
				ft_toupper.c 		\
				ft_tolower.c 		\
				ft_strchr.c 		\
				ft_calloc.c 		\
				ft_strdup.c 		\
				ft_substr.c 		\
				ft_strjoin.c 		\
				ft_strtrim.c 		\
				ft_split.c 			\
				ft_itoa.c 			\
				ft_strmapi.c 		\
				ft_putchar_fd.c 	\
				ft_putendl_fd.c 	\
				ft_putnbr_fd.c 		\
				ft_putstr_fd.c

SRCS_BONUS = 	ft_lstnew.c 		\
				ft_lstadd_front.c 	\
				ft_lstsize.c 		\
				ft_lstlast.c 		\
				ft_lstadd_back.c 	\
				ft_lstdelone.c 		\
				ft_lstclear.c 		\
				ft_lstiter.c 		\
				ft_lstmap.c 		\

OBJECTS = $(SRCS:.c=.o)

OBJECTS_BONUS = $(SRCS_BONUS:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	ar rc $@ $^

clean:
	$(RM) $(OBJECTS) $(OBJECTS_BONUS)

fclean: clean
	$(RM) $(NAME)

bonus: $(OBJECTS) $(OBJECTS_BONUS)
	ar rc $(NAME) $^

re: fclean all

.PHONY: all clean fclean re bonus
