NAME = phonebook

SRCS =	phonebook.cpp

OBJS = ${SRCS:.cpp=.o}

CC		= clang++

CFLAGS = -Wall -Wextra -Werror

INCLUDES = -I.

FCOUNTER=1

.cpp.o:
		@echo "\033[1;36mCompiled $(FCOUNTER) of 1 files\033[0m"
		@${CC} ${CFLAGS} ${SRCS} ${INCLUDES} -o ${NAME}
${NAME}::${OBJS}
		$(eval FCOUNTER=$(shell echo $$(($(FCOUNTER)+1))))
		@echo "\033[1;32mDONE!\033[0m"

clean:  
		@echo "\033[1;32mJunk removed!\033[0m"
		@rm -rf $(OBJS)

fclean: clean
		@rm -rf $(NAME)

all: ${OBJS}
