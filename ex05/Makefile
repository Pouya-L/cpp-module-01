# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/27 18:42:14 by plashkar          #+#    #+#              #
#    Updated: 2024/11/25 16:23:12 by plashkar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl

CC = c++

STANDARD_FLAGS = -Wall -Werror -Wextra -std=c++98 -g

SRC = \
	Harl.cpp \
	main.cpp \

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp
	@$(CC) $(STANDARD_FLAGS) -o $@ -c $<

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Compiling $@"
	@$(CC) $(STANDARD_FLAGS) $(OBJ) -o $(NAME) > /dev/null
	@echo "Harl has been created."

clean:
	@rm -f $(OBJ)
	@echo Object files have been deleted.

fclean: clean
	@rm -f $(NAME)
	@echo All created files have been deleted.

re: fclean all

v: all clean
	@echo
	@./Harl

.PHONY: fclean clean all re
