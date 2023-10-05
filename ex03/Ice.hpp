#ifndef ICE
# define ICE
# include "AMateria.hpp"
# include "ICharacter.hpp"
class Ice : public AMateria
{
public:
	Ice();
	~Ice();
	Ice(Ice &copy);
	Ice& operator=(const Ice& src);
	AMateria*	clone() const;
	void		use(ICharacter& target);
};
#endif
