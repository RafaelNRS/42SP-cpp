#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
private:
	const std::string name;
	int grade;
public:
	Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &other);
	~Bureaucrat();

	Bureaucrat	&operator=(const Bureaucrat &other);

	std::string getName() const;
	int getGrade() const;

	void increaseGrade();
	void decreaseGrade();

	class GradeTooHighException : public std::exception {
		public:
			virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception {
		public:
			virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif