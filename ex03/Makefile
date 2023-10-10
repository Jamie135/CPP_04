NAME = Interface
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
FILES = AMateria \
		Ice \
		Cure \
		Character \
		MateriaSource \
		main

INCLS = AMateria.hpp \
		Ice.hpp \
		Cure.hpp \
		Character.hpp \
		IMateriaSource.hpp \
		MateriaSource.hpp \
		ICharacter.hpp

SRCS = $(addsuffix .cpp, $(FILES))
OBJS = $(addsuffix .o, $(FILES))

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $^

.cpp.o: $(SRCS) $(INCLS)
	$(CC) $(FLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re