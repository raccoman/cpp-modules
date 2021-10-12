#include <RobotoMyRequestForm.hpp>

RobotoMyRequestForm::RobotoMyRequestForm() : Form() {
}

RobotoMyRequestForm::RobotoMyRequestForm(const std::string &target) : Form("roboto", 72, 45) {
	_target = target;
}

RobotoMyRequestForm::RobotoMyRequestForm(const RobotoMyRequestForm &form) : Form(form) {
	*this = form;
}

RobotoMyRequestForm::~RobotoMyRequestForm() {
}

std::string RobotoMyRequestForm::getTarget() const {
	return _target;
}

void RobotoMyRequestForm::execute() const {

	bool chance = (rand() % 100) < 50;
	if (chance)
		std::cout << _target << " has been robotomized successfully." << std::endl;
	else
		std::cout << _target << " robotomization failed." << std::endl;
}