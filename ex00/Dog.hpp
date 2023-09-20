#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog : public Animal {
public:
	Dog();
	Dog(const std::string &type);
	Dog(Dog &t);
	~Dog();
	Dog& operator=(const Dog& t);
	void	makeSound(void) const;
};

#endif
