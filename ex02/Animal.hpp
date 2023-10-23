#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <string>
# include "Brain.hpp"

class Animal
{
	public :

		virtual ~Animal(void) = 0;

		virtual Animal &operator = (Animal const &rhs);

		virtual void		makeSound() const = 0;
		virtual Brain		*getBrain() const = 0;	
		const std::string	getType() const;

	protected :

		Animal(void);
		Animal(std::string name);
		Animal(Animal const &src);
		std::string		type;

};

#endif
