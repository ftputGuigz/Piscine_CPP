# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/07 16:27:14 by gpetit            #+#    #+#              #
#    Updated: 2021/10/19 16:00:26 by gpetit           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

CXX = clang++

STD = -std=c++98

CXXFLAGS = -Wall -Wextra -Werror $(STD)

SRCS = main.cpp mutantstack.cpp

OBJS = $(SRCS:.cpp=.o)

all:$(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY: all fclean clean re
