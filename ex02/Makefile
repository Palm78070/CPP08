# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rthammat <rthammat@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/03 23:02:11 by rthammat          #+#    #+#              #
#    Updated: 2023/07/03 23:03:04 by rthammat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := ./MutantStack

CXX := c++

CXXFLAGS := -Wall -Werror -Wextra --std=c++98 -g

SRCS := main.cpp \

OBJS := $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	rm -rf *.o *.dSYM

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
