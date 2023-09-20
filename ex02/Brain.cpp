#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain: Constructor called" << std::endl;
}

Brain::Brain(Brain &copy)
{
	std::cout << "Brain: Copy constructor called" << std::endl;
	for (int i = 0; &copy != this && i < 100; i++)
		ideas[i] = copy.ideas[i];
}

Brain::~Brain()
{
	std::cout << "Brain: is destroyed" << std::endl;
}

Brain& Brain::operator=(const Brain &src)
{
	std::cout << "Brain: Copy assignment operator called" << std::endl;
	for (int i = 0; &src != this && i < 100; i++)
		ideas[i] = src.ideas[i];
	return (*this);
}

std::string	Brain::getIdea(int index) const
{
	if (index >= 0 && index < 100)
		return (ideas[index]);
	else
		return (NULL);
}

void	Brain::setIdea(int index, std::string idea)
{
	if (index >= 0 && index < 100)
		ideas[index] = idea;
}
