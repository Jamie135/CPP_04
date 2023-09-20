#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat: " <<  "Constructor called" << std::endl;
}

Cat::Cat(Cat &copy) : Animal(copy.type)
{
	std::cout << "Cat: " <<  "Constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat " << type << " is destroyed" << std::endl;
}

Cat& Cat::operator=(const Cat& src)
{
	std::cout << "Cat: Copy assignment operator called" << std::endl;
	type = src.type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat: Moew!" << std::endl;
}
