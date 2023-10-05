#ifndef CURE
# define CURE
# include "AMateria.hpp"
# include "ICharacter.hpp"
class Cure : public AMateria
{
public:
	Cure();
	~Cure();
	Cure(Cure &copy);
	Cure& operator=(const Cure& src);
	AMateria*	clone() const;
	void		use(ICharacter& target);
};
#endif
