# **************************************************************************** #
#                                                                              #
#                                                        :::      ::::::::     #
#    Makefile                                          :+:      :+:    :+:     #
#                                                    +:+ +:+         +:+       #
#    By: tireis <tireis@student.42vienna.com>      #+#  +:+       +#+          #
#                                                +#+#+#+#+#+   +#+             #
#    Created: 2026/04/22 14:13:18 by tireis           #+#    #+#               #
#    Updated: 2026/04/30 19:35:04 by tireis          ###   ########.fr         #
#                                                                              #
# **************************************************************************** #

NAME        = libft.a
CC          = cc
CFLAGS      = -Wall -Wextra -Werror -MMD -MP
HEADER      = libft.h

SRCS        =	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	        ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c \
	        ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
	        ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
	        ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c \
                ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
	        ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
	        ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
                ft_putnbr_fd.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
        	ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
	        ft_lstiter.c ft_lstmap.c

OBJS        = $(SRCS:.c=.o)
DEPS        = $(SRCS:.c=.d)

AR          = ar rcs
RM          = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS) 

clean:
	$(RM) $(OBJS) $(DEPS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
-include $(DEPS)
