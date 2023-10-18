#ifndef A_MATERIA
# define A_MATERIA
# include <iostream>
# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string	type;
public:
	AMateria(std::string const & type);
	virtual ~AMateria();
	AMateria();
	AMateria(AMateria& copy);
	AMateria& operator=(AMateria const &src);

	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
