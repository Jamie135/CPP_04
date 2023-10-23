#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	std::cout  << "Subject test"  << std::endl;
	{
		// const Animal *meta = new Animal();
		// Animal meta;

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
	std::cout  << "My test"  << std::endl;
	{
		Dog	*dog[3];
		Cat	*cat[3];
		Brain	*brain;
		
		for (int i = 0; i < 3; i++)
			dog[i] = new Dog();
		for (int i = 0; i < 3; i++)
			cat[i] = new Cat();
		std::cout << std::endl;

		brain = dog[0]->getBrain();
		brain->ideas[0] = "I'm dog";
		brain->ideas[1] = "I love humans";
		brain->ideas[2] = "I love eating";

		brain = cat[0]->getBrain();
		brain->ideas[0] = "I'm cat";
		brain->ideas[1] = "I hate humans";
		brain->ideas[2] = "I hate life";
		
		for (int i = 0; i < 3; i++)
			std::cout << "DOG : idea [" << i << "] " << dog[0]->getBrain()->ideas[i] << std::endl;
		for (int i = 0; i < 3; i++)
			std::cout << "CAT : idea [" << i << "] " << cat[0]->getBrain()->ideas[i] << std::endl;
		std::cout << std::endl;

		std::cout << "Copy dog to cat test"  << std::endl;
		*(cat[0]) = *(dog[0]);
		for (int i = 0; i < 3; i++)
			std::cout << "DOG : idea [" << i << "] " << dog[0]->getBrain()->ideas[i] << std::endl;
		for (int i = 0; i < 3; i++)
			std::cout << "CAT : idea [" << i << "] " << cat[0]->getBrain()->ideas[i] << std::endl;
		std::cout << std::endl;

		for (int i = 0; i < 3; i++)
			delete dog[i];
		for (int i = 0; i < 3; i++)
			delete cat[i];
	}
	return 0;
}
