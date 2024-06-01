#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm {
private:
	std::string	target;
public:
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &source);
	virtual ~ShrubberyCreationForm(void);

	ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &source);

	std::string getTarget(void) const;
	void		execute(Bureaucrat const &executor) const;

	class FileNotOpenException : public std::exception {
		public:
			virtual const char *what() const throw();
	};
};

#endif