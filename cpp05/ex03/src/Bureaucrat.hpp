#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class AForm;

class Bureaucrat
{
private:
	std::string const	name;
	int					grade;
public:
	Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &source);
	~Bureaucrat(void);
	Bureaucrat	&operator=(const Bureaucrat &source);

	std::string	getName(void) const;
	int			getGrade(void) const;

	void		incrementGrade(void);
	void		decrementGrade(void);

	void		signForm(AForm &form);

	void		executeForm(AForm const &form) const;

	class GradeTooHighException : public std::exception {
		public:
			virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception {
		public:
			virtual const char *what() const throw();
	};
};

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif