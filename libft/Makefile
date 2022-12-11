# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: salhabas <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 11:28:15 by salhabas          #+#    #+#              #
#    Updated: 2022/11/07 12:54:45 by salhabas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=		libft.a

CC	=		gcc
CFLAGS	=		-Wall -Werror -Wextra

INCLUDES	= 	libft.h

SRC_1 = \
	./ft_memset.c	\
	./ft_bzero.c	\
	./ft_memcpy.c	\
	./ft_memmove.c	\
	./ft_memchr.c	\
	./ft_memcmp.c	\
	./ft_calloc.c	\
	./ft_strlen.c	\
	./ft_strlcpy.c	\
	./ft_strlcat.c	\
	./ft_strchr.c	\
	./ft_strrchr.c	\
	./ft_strncmp.c	\
	./ft_strnstr.c	\
	./ft_strdup.c	\
	./ft_isdigit.c	\
	./ft_atoi.c	\
	./ft_isalpha.c	\
	./ft_isalnum.c	\
	./ft_isascii.c	\
	./ft_isprint.c	\
	./ft_toupper.c	\
	./ft_tolower.c
	
SRC_2 = \
	./ft_striteri.c	\
	./ft_substr.c	\
	./ft_strjoin.c	\
	./ft_strtrim.c	\
	./ft_split.c	\
	./ft_itoa.c	\
	./ft_strmapi.c	\
	./ft_putchar_fd.c	\
	./ft_putstr_fd.c	\
	./ft_putendl_fd.c	\
	./ft_putnbr_fd.c
	
BONUS =	./ft_lstnew.c			\
		./ft_lstlast.c		\
		./ft_lstadd_front.c	\
		./ft_lstsize.c		\
		./ft_lstadd_back.c	\
		./ft_lstclear.c		\
		./ft_lstdelone.c	\
		./ft_lstiter.c		\
		./ft_lstmap.c

SRCS = \
	$(SRC_1)	\
	$(SRC_2)		
	
OBJS = $(SRCS:.c=.o)

BONUS_OBJS = $(BONUS:.c=.o)

%.o: %.c 
	$(CC) $(CFLAGS) $(INCLUDE)-c $< -o $@

$(NAME):	$(OBJS) $(INCLUDE)
			ar rcs $(NAME) $(OBJS)
			

all:	$(NAME)

clean:
		rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
		rm -f $(NAME)  

re:		fclean all

bonus:		$(OBJS) $(BONUS_OBJS)
			ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:		all clean fclean bonus re		
