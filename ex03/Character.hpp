#ifndef CHARACTER
# define CHARACTER
# define SLOT_SIZE 4
# include <iostream>
# include <string>
# include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string	name;
	AMateria*	slots[4];
public:
	Character();
	Character(std::string const &name);
	~Character();
	Character(Character &copy);
	Character& operator=(const Character &src);
	std::string const &getName() const;
	void	equip(AMateria *m);
	void	unequip(int idx);
	void	use(int idx, ICharacter& target);
};

#endif
