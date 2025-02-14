# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/06 14:15:49 by amirfatt          #+#    #+#              #
#    Updated: 2025/02/13 16:07:35 by amirfatt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Convert

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 
#-pedantic

SOURCE = main.cpp ScalarConverter.cpp
OBJECT = $(SOURCE:.cpp=.o)

.PHONY: all clean fclean re

all : $(NAME)

$(NAME) : $(OBJECT)
	$(CXX) $(CXXFLAGS) -o  $(NAME) $(OBJECT)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean : 
	rm -f $(OBJECT)

fclean : clean
	rm -f $(NAME)

re : fclean all
