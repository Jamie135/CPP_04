#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < RECIPES_SIZE; i++)
		recipes[i] = 0;
}

MateriaSource::MateriaSource(MateriaSource &copy)
{
	for (int i = 0; i < RECIPES_SIZE; i++)
		if (copy.recipes[i])
			recipes[i] = copy.recipes[i]->clone();
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < RECIPES_SIZE; i++)
		if (recipes[i])
			delete recipes[i];
}

MateriaSource& MateriaSource::operator=(const MateriaSource &src)
{
	if (this != &src)
	{
		for (int i = 0; i < RECIPES_SIZE; i++)
			if (recipes[i])
			{
				delete recipes[i];
				recipes[i] = 0;
			}
		for (int i = 0; i < RECIPES_SIZE; i++)
			if (src.recipes[i])
				recipes[i] = src.recipes[i]->clone();
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	bool flag = false;

	for (int i = 0; m && i < RECIPES_SIZE; i++)
	{
		if (!recipes[i])
		{
			recipes[i] = m;
			flag = true;
			break ;
		}
	}
	if (!m)
		std::cout << "No material found!" << std::endl;
	else if (!flag)
		std::cout << "Recipes are full!" << std::endl;
	else
		std::cout << "Learned " << m->getType() << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < RECIPES_SIZE; i++)
	{
		if (recipes[i] && recipes[i]->getType() == type)
			return (recipes[i]->clone());
	}
	return (0);
}
