SHELL = /bin/sh

CC = clang++
RM = rm -rf
FLAGS = --std=c++98 -Wall -Wextra -Werror

NAME = ex04
SRC = ex04.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(OBJ) -o $(NAME) $(FLAGS)
	
%.o: %.cpp
	@$(CC) -c $< -o $@ $(FLAGS)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re