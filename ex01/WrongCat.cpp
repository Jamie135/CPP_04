#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat: " << "Constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat &copy) : WrongAnimal(copy.type)
{
	std::cout << "WrongCat: Copy constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat: " << type << " is destroyed" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &src)
{
	std::cout << "WrongCat: Copy assignment operator called" << std::endl;
	this->type = src.type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat: Meh!" << std::endl;
}
