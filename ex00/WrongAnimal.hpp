#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP
# include <iostream>
# include <string>

class WrongAnimal {
protected:
	std::string	type;
public:
	WrongAnimal();
	WrongAnimal(const std::string &type);
	WrongAnimal(WrongAnimal &copy);
	virtual	~WrongAnimal();
	WrongAnimal& operator=(const WrongAnimal &src);
	const std::string		&getType() const;
	virtual void	makeSound(void) const;
};

#endif
