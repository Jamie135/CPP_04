#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal: " << "Constructor called" << std::endl;
}

Animal::Animal(const std::string &type) : type(type)
{
	std::cout << "Animal: " << type << " Constructor called" << std::endl;
}

Animal::Animal(Animal &copy) : type(copy.type)
{
	std::cout << "Animal: Copy constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal: " << type << " is destroyed" << std::endl;
}

Animal& Animal::operator=(Animal const &src)
{
	std::cout << "Animal: Copy assignment operator called" << std::endl;
	type = src.type;
	return (*this);
}

const std::string	&Animal::getType() const
{
	return (type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal: *sound*" << std::endl;
}
