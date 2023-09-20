#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
	Dog* dog = new Dog();
	Cat* cat = new Cat();

	dog->setIdeas("Treat");
	Dog* dawg = new Dog(*dog);
	std::cout << "Dog idea:" << std::endl;
	std::cout << dog->getBrain()->getIdea(0) << std::endl;

	std::cout << "Dawg idea:" << std::endl;
	std::cout << dawg->getBrain()->getIdea(0) << std::endl;

	std::cout << "Changing Dog's idea:" << std::endl;
	dog->setIdeas("Toy");
	std::cout << "Dog idea:" << std::endl;
	std::cout << dog->getBrain()->getIdea(0) << std::endl;

	std::cout << "Dawg idea:" << std::endl;
	std::cout << dawg->getBrain()->getIdea(0) << std::endl;

	delete dawg;
	delete dog;
	delete cat;

	return (0);
}
