#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	WrongCat();
	WrongCat(WrongCat &copy);
	~WrongCat();
	WrongCat& operator=(const WrongCat &src);
	void	makeSound(void) const;
};

#endif
