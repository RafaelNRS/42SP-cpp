#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("default", 1, 1), target("default") {
	return ;
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), target(target) {
	return ;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &source) : AForm(source), target(source.target) {
	*this = source;
	return ;
}
ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	return ;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &source) {
	if (this == &source)
		return (*this);
	target = source.target;
	return (*this);
}

std::string ShrubberyCreationForm::getTarget(void) const {
	return (target);
}
void		ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	if (!this->getSigned())
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	std::ofstream file;
	std::string filename = target + "_shrubbery";
	file.open(filename.c_str());
	if (!file.is_open())
		throw ShrubberyCreationForm::FileNotOpenException();
	file << "       /\\" << std::endl;
	file << "      /\\/\\" << std::endl;
	file << "     /\\/\\/\\" << std::endl;
	file << "    /\\/\\/\\/\\" << std::endl;
	file << "   /\\/\\/\\/\\/\\" << std::endl;
	file << "  /\\/\\/\\/\\/\\/\\" << std::endl;
	file << " /\\/\\/\\/\\/\\/\\/\\" << std::endl;
	file << "/\\/\\/\\/\\/\\/\\/\\/\\" << std::endl;
	file << "       ||" << std::endl;
	file << "       ||" << std::endl;
	file << "       ||" << std::endl;
	file.close();
}

// Exception classes
const char *ShrubberyCreationForm::FileNotOpenException::what() const throw() {
	return ("Error: could not open file.");
}