# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/16 11:45:07 by agaliste          #+#    #+#              #
#    Updated: 2022/03/16 11:49:54 by agaliste         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# BINARY NAME
NAME = phonebook

# SOURCE FILES (.c)
SRCS = phonebook.cpp

# HEADER FILES (.h)
HEADER = headers

# COMPILER
CC = clang++

# COMPILATION FLAGS
FLAGS = -Wall -Wextra -Werror
SANITIZE_FLAGS = $(FLAGS) -fsanitize=address
DEBUG_FLAGS = $(SANITIZE_FLAGS) -g3

# COMPILED OBJECTS
OBJS = $(SRCS:.c=.o)

# INCLUDES
INCLUDES = -I$(HEADER)

# MAKEFILE RULES
.PHONY: all sanitize resanitize debug rebug clean fclean re

all: $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(OBJS) 
	$(CC) $(FLAGS) $(SRCS) $(INCLUDES) -o $(NAME)

sanitize: $(NAME)
	$(CC) $(SANITIZE_FLAGS) $(SRCS) $(INCLUDES) -o $(NAME)

resanitize: fclean sanitize

debug: $(NAME)
	$(CC) $(DEBUG_FLAGS) $(SRCS) $(INCLUDES) -o $(NAME)

rebug: fclean debug

clean:
	@rm -rf $(OBJS)
	@echo "cleaning .o files"

fclean: clean
	@rm -rf $(NAME)
	@echo "Removed binary"

re: fclean all
