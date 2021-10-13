#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <Convertable.hpp>
#include <iostream>
#include <cstdlib>

class PresidentialPardonForm: public Form {

private:
	std::string _target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string& target);
	PresidentialPardonForm(const PresidentialPardonForm& form);
	~PresidentialPardonForm();

	std::string getTarget() const;

	void execute() const;
};

#endif
