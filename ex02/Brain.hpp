#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <string>

class Brain
{
	public:
		std::string ideas[100];
	// Constructors
		Brain();
		Brain(const Brain &copy);

	// Deconstructors
		~Brain();

	// Overloaded Operators
		Brain &operator=(const Brain &src);

	// Public Methods

	// Getter
		const std::string getIdea(size_t i)const;
		const std::string *getIdeaAddress(size_t i)const;
	// Setter
		void setIdea(size_t i, std::string idea);
};

#endif
