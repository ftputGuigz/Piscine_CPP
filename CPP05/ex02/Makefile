# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/02 12:50:27 by gpetit            #+#    #+#              #
#    Updated: 2021/10/13 12:10:54 by gpetit           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

CXX = clang++

STD = -std=c++98

CXXFLAGS = -Wall -Wextra -Werror $(STD)

SRCS = Bureaucrat.cpp main.cpp Form.cpp \
PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS)

clean: 
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME) *_shrubbery

re: fclean $(NAME)

.PHONY: all clean fclean re
