#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"
# include <string>

class Cat: public Animal
{
	private:
		Brain *brain;

	public:
	// Constructors
		Cat();
		Cat(const Cat &copy);

	// Deconstructors
		~Cat();

	// Overloaded Operators
		Cat &operator=(const Cat &src);

	// Public Methods
		void makeSound(void)const;
	// Getter
		void getIdeas(void)const;
	// Setter
		void setIdea(size_t i, std::string idea);
};

#endif
