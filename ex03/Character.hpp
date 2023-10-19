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
	AMateria*	loot[100];
public:
	Character();
	Character(std::string name);
	~Character();
	Character(Character const &copy);
	Character& operator=(const Character &src);
	std::string const &getName() const;
	virtual void	equip(AMateria *m);
	virtual void	unequip(int idx);
	virtual void	use(int idx, ICharacter& target);

	virtual void				showInventory() const;
	virtual void				showLoot() const;
	// virtual void				setname(std::string name);
	virtual void				lootItem(int idx);
};

#endif
