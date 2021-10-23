# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/21 16:38:40 by gpetit            #+#    #+#              #
#    Updated: 2021/09/22 18:35:29 by gpetit           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  a.out

CC = clang++

STD = -std=c++98

CFLAGS = -Wall -Werror -Wextra $(STD)

SRCS = main.cpp Zombie.cpp ZombieHorde.cpp

OBJS = $(SRCS:.cpp=.o)

%.o:%.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
