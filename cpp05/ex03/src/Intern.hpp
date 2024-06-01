#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

enum FormType {
    ROBOTOMY_REQUEST,
    PRESIDENTIAL_PARDON,
    SHRUBBERY_CREATION
};

class Intern
{
private:
    std::string   form_types[3];
public:
    Intern();
    ~Intern();
    AForm* makeForm(std::string name, std::string target);

    class FormNotFoundException : public std::exception {
        virtual const char* what() const throw();
    };
};

#endif