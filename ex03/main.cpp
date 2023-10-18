#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main(
{
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	}
 	std::cout << "_______________________________________________" << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		std::cout << "create and equip more 8 times" << std::endl;
		for (int i = 0; i < 8; i++)
		{
			tmp = src->createMateria("ice");
			me->equip(tmp);
			tmp = src->createMateria("cure");
			me->equip(tmp);
		}
		
		std::cout << std::endl;
		// me->showInventory();
		std::cout << std::endl;
		// src->showMateria();
		std::cout << std::endl;
		
		ICharacter* bob = new Character("bob");
		std::cout << "use 1,2,3 skills in inventory 3 times" << std::endl;
		for (int i = 0; i < 3; i++)
		{
			me->use(3, *bob);
			me->use(2, *bob);
			me->use(1, *bob);
		}
		std::cout << std::endl << "unequip skill 0 in inventory 3 times" << std::endl;
		for (int i = 0; i < 3; i++)
			me->unequip(0);
		std::cout << "use inventory index 10 and -50" << std::endl;
		me->use(10, *bob);
		me->use(-50, *bob);
		// me->showInventory();
		// me->showGroundloot();
		delete bob;
		delete me;
		delete src;
	}
	std::cout << "______________________________________________\n" << std::endl;
	{
		std::cout << "Deep copy tests\n" << std::endl;
		
		Character me("Me");
		
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		
		AMateria* tmp;
		tmp = src->createMateria("ice");
		
		me.equip(tmp);
		std::cout << me.getName() << " ";
		// me.showInventory();

		Character test(me);
		std::cout << "Copy of me ";
		// test.showInventory();
		delete src;
	}
	return 0;
}