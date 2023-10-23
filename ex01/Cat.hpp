#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"
# include <string>

class Cat : public Animal 
{
private:
	Brain*	brain;
public:
	Cat();
	Cat(Cat &copy);
	virtual	~Cat();
	Cat &operator=(Cat const &src);
	virtual Animal &operator= (Animal const &src);
	virtual void	makeSound(void) const;
	void	setIdeas(const std::string &idea);
	Brain*	getBrain() const;
};

#endif
