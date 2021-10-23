# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/29 13:57:51 by gpetit            #+#    #+#              #
#    Updated: 2021/10/01 16:09:28 by gpetit           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

CC = clang++

STD = -std=c++98

CFLAGS = -Wall -Wextra -Werror -g3 $(STD)

SRCS = main.cpp Cure.cpp Ice.cpp Bolt.cpp Fire.cpp AMateria.cpp Character.cpp MateriaSource.cpp

OBJS = $(SRCS:.cpp=.o)

%.o : %.cpp
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
