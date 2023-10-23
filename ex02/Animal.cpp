#include "Animal.hpp"

// Constructors
Animal::Animal()
{
	std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal(std::string name) : type(name)
{
	std::cout << "Animal parametric constructor has been called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal Copy Constructor called" << std::endl;
	*this = copy;
}

// Deconstructors
Animal::~Animal()
{
	std::cout << "Animal Deconstructor called" << std::endl;
}

// Overloaded Operators
Animal &Animal::operator=(Animal const &src)
{
	std::cout << "Animal Assignation operator called" << std::endl;
	if (this == &src)
		return *this;

	this->type = src.type;
	return *this;
}

// Public Methods
void Animal::makeSound(void)const
{
}

// Getter
const std::string	Animal::getType(void)const
{
	return (this->type);
}

// Setter
