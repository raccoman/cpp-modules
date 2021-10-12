#include <Form.hpp>

Form::Form() : name("Unknown"), _signed(false), gradeSign(0), gradeExecute(0) {
}

Form::Form(const std::string& name, unsigned int gradeSign, unsigned int gradeExecute) : name(name), _signed(false), gradeSign(gradeSign), gradeExecute(gradeExecute) {
}

Form::Form(const Form &form) : name(form.getName()), gradeSign(form.getSignGrade()), gradeExecute(form.getExecuteGrade()) {
	*this = form;
}

Form::~Form() {
}

Form &Form::operator=(const Form &other) {
	this->_signed = other.isSigned();
	return *this;
}

std::string Form::getName() const {
	return name;
}

bool Form::isSigned() const {
	return _signed;
}

unsigned int Form::getSignGrade() const {
	return gradeSign;
}

unsigned int Form::getExecuteGrade() const {
	return gradeExecute;
}

void Form::beSigned(const Bureaucrat &bureaucrat) {

	if (bureaucrat.getGrade() > gradeSign)
		throw GradeTooLowException();

	_signed = true;
}

void Form::execute(const Bureaucrat &executor) const {
	if (!_signed) {
		std::cout << "Cannot execute form because isn't signed." << std::endl;
		return;
	}

	if (executor.getGrade() > gradeExecute)
		throw GradeTooLowException();

	this->execute();
}

void Form::execute() const {
}

const char* Form::GradeTooHighException::what() const throw() {
	return "Grade is too high";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "Grade is too low";
}

std::ostream& operator<< (std::ostream& o, const Form& f) {
	o << "Name: " << f.getName() << ", Signed: " << f.isSigned() << ", Grade to Sign: " << f.getSignGrade() << ", Grade to Execute: " << f.getExecuteGrade() << std::endl;
	return o;
}