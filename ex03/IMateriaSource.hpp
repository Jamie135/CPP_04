#ifndef I_MATERIA_SOURCE
# define I_MATERIA_SOURCE
# include <iostream>
# include <string>

class IMateriaSource
{
	public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif
