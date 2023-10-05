#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{}

Cure::~Cure()
{}

Cure::Cure(Cure &copy) : AMateria(copy.type)
{}

Cure& Cure::operator=(const Cure& src)
{
	if (this != &src)
		type = src.type;
	return (*this);
}

AMateria*	Cure::clone() const
{
	return (new Cure());
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals "
		<< target.getName()
		<< "'s wounds *" << std::endl;
}
