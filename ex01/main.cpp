#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	std::cout  << "TEST 1: Given test"  << std::endl;
	{
		const Animal* j = new Dog();
		std::cout << std::endl;
		const Animal* i = new Cat();
		std::cout << std::endl;
		delete j;//should not create a leak
		std::cout << std::endl;
		delete i;
		std::cout << std::endl;
		std::cout << "_______________________________________________________\n" << std::endl;
	}
	std::cout  << "TEST 2: My test"  << std::endl;
	{
		Animal	*animal[6];
		Brain	*brain;
		
		for (int i = 0; i < 6; i++)
		{
			if (i < 6 / 2)
				animal[i] = new Dog();
			else
				animal[i] = new Cat();
			std::cout << std::endl;
		}
		
		brain = animal[0]->getBrain();
		brain->ideas[0] = "I'm dog";
		brain->ideas[1] = "I love humans";
		brain->ideas[2] = "I love eating";
		brain->ideas[3] = "I love playing";

		brain = animal[6 - 1]->getBrain();
		brain->ideas[0] = "I'm cat";
		brain->ideas[1] = "I hate humans";
		brain->ideas[2] = "I hate life";
		brain->ideas[3] = "I hate other animals";
		
		std::cout << "Copy dog to cat test"  << std::endl;
		for (int i = 0; i < 4; i++)
			std::cout << "DOG : idea [" << i << "] " << animal[0]->getBrain()->ideas[i] << std::endl;
		for (int i = 0; i < 4; i++)
			std::cout << "CAT : idea [" << i << "] " << animal[6 - 1]->getBrain()->ideas[i] << std::endl;
		
		std::cout << std::endl;
		*(animal[6 - 1]) = *(animal[0]);
		std::cout << std::endl;
		*(animal[6 - 2]) = *(animal[6 - 1]);
		std::cout << std::endl;

		for (int i = 0; i < 4; i++)
			std::cout << "DOG : idea [" << i << "] " << animal[0]->getBrain()->ideas[i] << std::endl;
		for (int i = 0; i < 4; i++)
			std::cout << "CAT : idea [" << i << "] " << animal[6 - 1]->getBrain()->ideas[i] << std::endl;

		std::cout << std::endl;
		
		std::cout  << "Deep copy test"  << std::endl;
		
		std::cout << "DOG : " << animal[0]->getBrain() << std::endl;
		std::cout << "CAT : " << animal[6 - 1]->getBrain() << std::endl;
		
		std::cout  << "Copy works properly??"  << std::endl;
		
		Dog basic;
		Dog tmp = basic;
		
		std::cout << std::endl;
		
		Cat	basicat;
		Cat tmp2 = basicat;

		std::cout << std::endl;
		
		for (int i = 0; i < 6; i++)
			delete animal[i];
	}
	return 0;
}
