#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <Convertable.hpp>
#include <iostream>
#include <cstdlib>

class RobotoMyRequestForm: public Form {

private:
	std::string _target;
public:
	RobotoMyRequestForm();
	RobotoMyRequestForm(const std::string& target);
	RobotoMyRequestForm(const RobotoMyRequestForm& form);
	~RobotoMyRequestForm();

	std::string getTarget() const;

	void execute() const;
};

#endif
