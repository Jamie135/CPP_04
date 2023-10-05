#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{}

Ice::~Ice()
{}

Ice::Ice(Ice &copy) : AMateria(copy.type)
{}

Ice& Ice::operator=(const Ice& src)
{
	if (this != &src)
		type = src.type;
	return (*this);
}

AMateria*	Ice::clone() const
{
	return (new Ice());
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at "
		<< target.getName()
		<< " *" << std::endl;
}
