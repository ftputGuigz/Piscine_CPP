# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/29 13:57:51 by gpetit            #+#    #+#              #
#    Updated: 2021/09/29 16:38:29 by gpetit           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

CC = clang++

STD = -std=c++98

CFLAGS = -Wall -Wextra -Werror $(STD)

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

OBJS = $(SRCS:.cpp=.o)

%.o:%.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY: all re clean fclean
