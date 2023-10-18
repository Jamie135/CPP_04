#ifndef DOG_HPP
# define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

// classes

class Dog: public Animal
{
	private:
		Brain *brain;

	public:
	// Constructors
		Dog();
		Dog(const Dog &copy);

	// Deconstructors
		~Dog();

	// Overloaded Operators
		Dog &operator=(const Dog &src);

	// Public Methods
		void makeSound(void)const;
	// Getter
		void getIdeas(void)const;
	// Setter
		void setIdea(size_t i, std::string idea);
};

#endif
