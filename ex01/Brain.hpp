#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <string>

class Brain 
{
public:
	Brain();
	Brain(Brain &copy);
	~Brain();
	Brain& operator=(const Brain &src);
	std::string	getIdea(int index) const;
	void		setIdea(int index, std::string idea);

	std::string	ideas[100];
};

#endif
