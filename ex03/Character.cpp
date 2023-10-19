#include "Character.hpp"

Character::Character() : ICharacter(), name("")
{
	for (int i = 0; i < SLOT_SIZE; i++)
		slots[i] = 0;
}

Character::Character(std::string name): ICharacter(), name(name)
{
	for (int i = 0; i < 4; i++)
		slots[i] = NULL;
	for (int i = 0; i < 100; i++)
		loot[i] = NULL;
	return ;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (slots[i])
			delete slots[i];
	for (int i = 0; i < 100; i++)
		if (loot[i])
			delete loot[i];
}

Character::Character(Character const &copy): ICharacter(), name(copy.name)
{
	for (int i = 0; i < SLOT_SIZE; i++)
		slots[i] = NULL;
	for (int i = 0; i < 100; i++)
		loot[i] = NULL;
	*this = copy;
}

Character& Character::operator=(const Character &src)
{
	if (this == &src)
		return (*this);

	name = src.name;

	for (int i = 0; i < 4; i++)
		if (slots[i])
			delete slots[i];
	for (int i = 0; i < 100; i++)
		if (loot[i])
			delete loot[i];

	for (int i = 0; i < 4; i++)
		if (src.slots[i])
		slots[i] = src.slots[i]->clone();
	for (int i = 0; i < 100; i++)
		if (src.loot[i])
			loot[i] = src.loot[i]->clone();
	return (*this);
}

std::string const &Character::getName() const
{
	return (name);
}

void	Character::equip(AMateria *m)
{
	int	flag = -1;

	for (int i = 0; i < SLOT_SIZE; i++)
	{
		if (slots[i] == 0)
		{
			slots[i] = m;
			flag = i;
			break ;
		}
	}
	if (!m)
		std::cout << "No item found!" << std::endl;
	else if (flag == -1)
	{
		std::cout << "Inventory is full!" << std::endl;
		delete m;
	}
	else
		std::cout << "Equipped " << m->getType()
			<< " to slot " << flag << std::endl;
}

void	Character::lootItem(int idx)
{
	for (int i = 0; i < 100; i++)
	{
		if (loot[i] == NULL)
		{
			loot[i] = slots[idx];
			break ;
		}
	}
	if (loot[99] != NULL)
	{
		std::cout << "Ground materia waste dissapearing from the floor..." << std::endl;
		for (int i = 0; i < 100; i++)
			if (loot[i] != NULL)
				delete loot[i];
		for (int i = 0; i < 100; i++)
			loot[i] = NULL;
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	lootItem(idx);
	slots[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < SLOT_SIZE)
	{
		if (slots[idx])
			slots[idx]->use(target);
		else
			std::cout << "No item found!" << std::endl;
	}
	else
		std::cout << "Wrong slot number!" << std::endl;
}

void	Character::showInventory() const
{
	std::cout << "--------------- INVENTORY ---------------" << std::endl;
	for (int i = 0; i < 4; i++)
		if (slots[i] != NULL)
		{
			std::cout << "slot[" << i << "]: " << slots[i]->getType() << std::endl;
			std::cout << "address:" << slots[i] << std::endl;
		}
}

void	Character::showLoot() const
{
	std::cout << "--------------- GROUNDLOOT ---------------" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		if (loot[i] != NULL)
		{
			std::cout << "loot[" << i << "]: " << loot[i]->getType() << std::endl;
			std::cout << "address: " << loot[i] << std::endl;
		}
	}
}
