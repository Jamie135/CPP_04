#ifndef CURE
# define CURE
# include "AMateria.hpp"
# include "ICharacter.hpp"
class Cure : public AMateria
{
public:
	Cure();
	virtual	~Cure();
	Cure(Cure &copy);
	Cure& operator=(const Cure& src);
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};
#endif
