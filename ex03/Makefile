NAME = interface_and_recap
CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 #-g -fsanitize=address
RM = rm -rf
SRC = main.cpp AMateria.cpp ICharacter.cpp Cure.cpp Ice.cpp Character.cpp MateriaSource.cpp IMateriaSource.cpp
OBJ = ${SRC:%.cpp=%.o}

$(NAME): $(OBJ)
	$(CC) $(CXXFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re