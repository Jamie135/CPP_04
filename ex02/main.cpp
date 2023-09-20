#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
	Dog* dog = new Dog();
	Cat* cat = new Cat();

	dog->setIdeas("Cookie");
	Dog* bulldog = new Dog(*dog);
	std::cout << "Dog idea:" << std::endl;
	std::cout << dog->getBrain()->getIdea(0) << std::endl;

	std::cout << "Bulldog idea:" << std::endl;
	std::cout << bulldog->getBrain()->getIdea(0) << std::endl;

	std::cout << "Changing Dog's idea:" << std::endl;
	dog->setIdeas("Bone");
	std::cout << "Dog idea:" << std::endl;
	std::cout << dog->getBrain()->getIdea(0) << std::endl;

	std::cout << "Bulldog idea:" << std::endl;
	std::cout << bulldog->getBrain()->getIdea(0) << std::endl;

	delete bulldog;
	delete dog;
	delete cat;

	return (0);
}
