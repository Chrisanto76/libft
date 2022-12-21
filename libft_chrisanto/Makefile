# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apoure <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/09 09:27:16 by apoure            #+#    #+#              #
#    Updated: 2022/12/13 11:53:18 by apoure           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_strlen.c ft_isascii.c \
ft_isprint.c ft_toupper.c ft_tolower.c ft_strncmp.c \
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
ft_bzero.c ft_memset.c ft_memchr.c ft_memcpy.c ft_memcmp.c ft_memmove.c \
ft_strchr.c ft_strrchr.c ft_atoi.c ft_strdup.c ft_calloc.c ft_strnstr.c \
ft_strlcpy.c ft_strlcat.c ft_substr.c ft_strjoin.c ft_strtrim.c \
ft_strmapi.c ft_split.c  ft_striteri.c ft_itoa.c \

OBJ = $(SRC:.c=.o)

SRC_BONUS = ft_lstnew.c ft_lstsize.c ft_lstadd_front.c ft_lstlast.c \
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c \

OBJ_BONUS = $(SRC_BONUS:.c=.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra
AR = ar -rcs
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $@ $^

%.o: %.c
	$(CC) $(FLAGS) -c $^

clean:
	$(RM) $(OBJ) $(OBJ_BONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus: $(OBJ) $(OBJ_BONUS)
	$(AR) $(NAME) $(OBJ_BONUS)

.PHONY: all clean fclean re bonus
