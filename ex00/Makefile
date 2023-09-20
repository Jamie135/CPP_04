NAME = Polymorphism
CC = clang++
FLAGS = -Wall -Wextra -Werror -std=c++98
FILES = Animal.cpp \
		Dog.cpp \
		Cat.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp \
		main

INCLS = Animal.hpp \
		Dog.hpp \
		WrongCat.hpp \
		WrongAnimal.hpp \
		Cat.hpp

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