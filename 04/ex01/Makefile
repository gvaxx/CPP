SHELL = /bin/sh

CC = clang++
RM = rm -rf
FLAGS = --std=c++98 -Wall -Wextra -Werror

NAME = character
OBJ = $(SRC:.cpp=.o)
SRC = main.cpp Character.cpp	\
	weapon/AWeapon.cpp			\
	weapon/PlasmaRifle.cpp \
	weapon/PowerFist.cpp \
	weapon/ChainSaw.cpp \
	enemy/Enemy.cpp \
	enemy/RadScorpion.cpp \
	enemy/Terminator.cpp \
	enemy/SuperMutant.cpp 

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