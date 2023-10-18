#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog: " << "Constructor called" << std::endl;
}

Dog::Dog(const std::string &type) : Animal(type)
{
	std::cout << "Dog: " << "Constructor called" << std::endl;
}

Dog::Dog(Dog &copy) : Animal(copy.type)
{
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog: " << type << " is destroyed" << std::endl;
}

Dog& Dog::operator=(const Dog& src)
{
	std::cout << "Dog: Copy assignment operator called" << std::endl;
	type = src.type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog: Woof!" << std::endl;
}
