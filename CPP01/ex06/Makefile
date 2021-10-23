# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/22 13:22:28 by gpetit            #+#    #+#              #
#    Updated: 2021/09/23 11:41:52 by gpetit           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  karenFilter

CC = clang++

STD = -std=c++98

CFLAGS = -Wall -Werror -Wextra $(STD)

SRCS = main.cpp Karen.cpp

OBJS = $(SRCS:.cpp=.o)

%.o:%.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
