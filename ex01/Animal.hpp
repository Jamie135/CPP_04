#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <string>
# include "Brain.hpp"

class Animal {
protected:
	std::string	type;
public:
	Animal();
	Animal(const std::string &type);
	Animal(Animal &copy);
	virtual ~Animal();
	virtual	Animal& operator=(Animal const &src);
	const std::string	&getType() const;
	virtual void		makeSound(void) const;
	virtual Brain		*getBrain() const = 0;
};

#endif
