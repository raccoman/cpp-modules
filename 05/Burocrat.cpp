//
// Created by Roberto Boldini on 9/22/21.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
	std::cout << "Default constructor called." << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Default destructor called." << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name) {
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade is too damn high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade is too low";
}
