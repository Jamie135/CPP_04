#ifndef ICE
# define ICE
# include "AMateria.hpp"
# include "ICharacter.hpp"
class Ice : public AMateria
{
public:
	Ice();
	virtual ~Ice();
	Ice(Ice &copy);
	Ice& operator=(const Ice& src);
	virtual AMateria*	clone() const;
	virtual void		use(ICharacter& target);
};
#endif
