# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddiniz-m <ddiniz-m@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 14:09:15 by ddiniz-m          #+#    #+#              #
#    Updated: 2022/11/03 14:38:21 by ddiniz-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS: 

OBJS: $(SRCS: .c=.o)

NAME: libft.a

RM: rm -f

all: $(NAME)

$(NAME) : $(OBJS) 
	@ar rcs ()

$(SRCS: .c=.o):%.o %.c
	$(CC) $(CFLAGS)

clean:
	$(RM) $(NAME) $(OBJS)

fclean: clean

re: