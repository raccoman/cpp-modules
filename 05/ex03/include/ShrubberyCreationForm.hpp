#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <Form.hpp>
#include <iostream>
#include <fstream>

class ShrubberyCreationForm: public Form {

private:
	std::string _target;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string& target);
	ShrubberyCreationForm(const ShrubberyCreationForm& form);
	~ShrubberyCreationForm();

	std::string getTarget() const;

	void execute() const;
};

#endif
