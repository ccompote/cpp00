# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccompote <ccompote@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/28 14:10:13 by ccompote          #+#    #+#              #
#    Updated: 2023/06/05 15:45:07 by ccompote         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

SRCS =  main.cpp PhoneBook.cpp Contact.cpp

NAME =  phonebook

CFLAGS = -Wall -Wextra -Werror -std=c++98

OBJ_DIR = ./obj/
OBJ_FILES = $(patsubst %.cpp, %.o, $(SRCS))
OBJ	= $(addprefix $(OBJ_DIR), $(OBJ_FILES))

SRCS_DIR = ./

$(OBJ_DIR)%.o:$(SRCS_DIR)%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all: obj $(NAME)

obj: 
	mkdir -p $(OBJ_DIR)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re