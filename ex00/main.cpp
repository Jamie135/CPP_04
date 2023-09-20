#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << "Type tests:" << std::endl;
	std::cout << animal->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << wrongAnimal->getType() << " " << std::endl;
	std::cout << wrongCat->getType() << " " << std::endl;

	std::cout << "Sound tests:" << std::endl;
	animal->makeSound();
	dog->makeSound();
	cat->makeSound();
	wrongAnimal->makeSound();
	wrongCat->makeSound();

	std::cout << "Deep copy tests:" << std::endl;
	Dog dog1("Doggo");
	Dog dog2(dog1);
	std::cout << dog1.getType() << " " << std::endl;
	std::cout << dog2.getType() << " " << std::endl;
	dog1.setType("Shiba inu");
	std::cout << "Deep copy test result:" << std::endl;
	std::cout << dog1.getType() << " " << std::endl;
	std::cout << dog2.getType() << " " << std::endl;
	delete wrongAnimal;
	delete animal;
	delete dog;
	delete cat;
	delete wrongCat;
}
