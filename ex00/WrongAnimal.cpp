#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "WrongAnimal: " << "Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type) : type(type)
{
	std::cout << "WrongAnimal: " << "Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &copy) : type(copy.type)
{
	std::cout << "WrongAnimal: Copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal: " << type << " is destroyed" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &src)
{
	std::cout << "WrongAnimal: Copy assignment operator called" << std::endl;
	this->type = src.type;
	return (*this);
}

const std::string	&WrongAnimal::getType() const
{
	return (type);
}

void WrongAnimal::setType(const std::string &value)
{
	type = value;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal: WrongAnimalish sound !!" << std::endl;
}
