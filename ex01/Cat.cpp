#include "Cat.hpp"
#include <string>

Cat::Cat() : Animal("Cat"), brain(new Brain())
{
	std::cout << "Cat: " <<  "Constructor called" << std::endl;
}

Cat::Cat(Cat &copy) : Animal(copy.type), brain(new Brain((*copy.getBrain())))
{
	std::cout << "Cat: Copy Constructor called" << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat " << type << " is destroyed" << std::endl;
}

Cat& Cat::operator=(const Cat& src)
{
	std::cout << "Cat: Copy assignment operator called" << std::endl;
	if (&src != this)
	{
		this->type = src.type;
		if (brain)
			delete brain;
		brain = new Brain((*src.getBrain()));
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat: Moew!" << std::endl;
}

Brain*	Cat::getBrain(void) const
{
	return (brain);
}

void	Cat::setIdeas(const std::string &idea)
{
	for (int i = 0; i < 100; i++)
		brain->setIdea(i, idea);
}
