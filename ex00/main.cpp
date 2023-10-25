#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
const WrongAnimal* w = new WrongAnimal();
const WrongAnimal* x = new WrongCat();
std::cout << std::endl;

std::cout << meta->getType() << " " << std::endl;
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
std::cout << w->getType() << " " << std::endl;
std::cout << x->getType() << " " << std::endl;
std::cout << std::endl;

i->makeSound();
j->makeSound();
w->makeSound();
x->makeSound();
meta->makeSound();
std::cout << std::endl;

std::cout << "Deep copy tests:" << std::endl;
Dog dog1("Pitbull");
Dog dog2(dog1);
std::cout << dog1.getType() << " " << std::endl;
std::cout << dog2.getType() << " " << std::endl;
dog1.setType("Tibetan");
std::cout << "Deep copy test result:" << std::endl;
std::cout << dog1.getType() << " " << std::endl;
std::cout << dog2.getType() << " " << std::endl;

delete meta;
delete j;
delete i;
delete w;
delete x;
return 0;
}
