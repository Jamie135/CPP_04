#include "Dog.hpp"
#include <string>

Dog::Dog() : Animal("Dog"), brain(new Brain())
{
	std::cout << "Dog: " << "Constructor called" << std::endl;
}

Dog::Dog(Dog &copy) : Animal("Dog"), brain(new Brain((*copy.getBrain())))
{
	std::cout << "Dog: Copy constructor called" << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog: " << type << " is destroyed" << std::endl;
}

Dog &Dog::operator=(Dog const &src)
{
	std::cout << "Dog: Copy assignment operator called" << std::endl;
	if (&src != this)
	{
		type = src.type;
		if (brain)
			delete brain;
		brain = new Brain((*src.getBrain()));
	}
	return (*this);
}

Animal	&Dog::operator= (Animal const &obj)
{
	std::cout << "Dog: Copy assignement operator called" << std::endl;
	this->type = obj.getType();
	*this->brain = *obj.getBrain();
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog: Woof!" << std::endl;
}

Brain*	Dog::getBrain(void) const
{
	return (brain);
}

void	Dog::setIdeas(const std::string &idea)
{
	for (int i = 0; i < 100; i++)
		brain->setIdea(i, idea);
}
