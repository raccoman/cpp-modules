#ifndef INTERN_HPP
#define INTERN_HPP

#include <Form.hpp>
#include <iostream>

class Intern {
private:
	std::string	_name;
	std::string	_target;
public:
	Intern();
	~Intern();

	Form	*makeForm(std::string name, std::string target);

	class FormNotFound : public std::exception {
		virtual const char* what() const throw();
	};
};

#endif
