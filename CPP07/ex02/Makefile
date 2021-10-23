# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/07 16:27:14 by gpetit            #+#    #+#              #
#    Updated: 2021/10/18 15:46:07 by gpetit           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

CXX = clang++

STD = -std=c++98

CXXFLAGS = -g3 -Wall -Wextra -Werror $(STD)

SRCS = main.cpp

SRCS_SCHOOL = main2.cpp

OBJS = $(SRCS:.cpp=.o)

OBJS_SCHOOL = $(SRCS_SCHOOL:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS)

school: $(OBJS_SCHOOL)
	$(CXX) $(CXXFLAGS) $(OBJS_SCHOOL)

clean:
	rm -rf $(OBJS) $(OBJS_SCHOOL)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY: all fclean clean re school
