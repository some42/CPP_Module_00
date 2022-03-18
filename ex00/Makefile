# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/16 16:57:41 by agaliste          #+#    #+#              #
#    Updated: 2022/03/19 00:09:13 by agaliste         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# BINARY NAME
NAME = megaphone

# SOURCE FILES (.c)
SRCS = megaphone.cpp

# COMPILER
CC = clang++

# COMPILATION FLAGS
FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
SANITIZE_FLAGS = $(FLAGS) -fsanitize=address
DEBUG_FLAGS = $(SANITIZE_FLAGS) -g3

# COMPILED OBJECTS
OBJS = $(SRCS:.cpp=.o)

# MAKEFILE RULES
.PHONY: all sanitize resanitize debug rebug clean fclean re

all: $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS) 
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

sanitize: $(NAME)
	$(CC) $(SANITIZE_FLAGS) $(SRCS) -o $(NAME)

resanitize: fclean sanitize

debug: $(NAME)
	$(CC) $(DEBUG_FLAGS) $(SRCS) -o $(NAME)

rebug: fclean debug

clean:
	@rm -rf $(OBJS)
	@echo "cleaning .o files"

fclean: clean
	@rm -rf $(NAME)
	@echo "Removed binary"

re: fclean all
