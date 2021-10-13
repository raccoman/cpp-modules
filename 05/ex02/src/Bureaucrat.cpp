#include <Convertable.hpp>

Bureaucrat::Bureaucrat() {
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat::Bureaucrat(const Bureaucrat& b) : _name(b.getName()) {
	*this = b;
}

Bureaucrat& Bureaucrat::operator= (const Bureaucrat& b) {
	_grade = b.getGrade();
	return *this;
}

unsigned int Bureaucrat::getGrade() const { return _grade; }
std::string Bureaucrat::getName() const { return _name; }

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name) {
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();

	_grade = grade;
}

void Bureaucrat::incrementGrade()
{
	if (_grade == 1)
		throw GradeTooHighException();
	_grade--;
	std::cout << "Grade of bureaucrat " + getName() + " incremented to " << getGrade() << std::endl;
}

void Bureaucrat::decrementGrade()
{
	if (_grade == 150)
		throw GradeTooLowException();
	_grade++;
	std::cout << "Grade of bureaucrat " + getName() + " decremented to " << getGrade() << std::endl;
}

void Bureaucrat::signForm(Form form) {

	if (_grade > form.getSignGrade()) {
		std::cout << _name << " cannot sign " << form.getName() << " because his grade is too low." << std::endl;
		return;
	}

	form.beSigned(*this);
	std::cout << _name << " signs " << form.getName() << "." << std::endl;
}


const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade is too low";
}

std::ostream& operator<< (std::ostream& o, const Bureaucrat& b) {
	o << b.getName() + ", bureaucrat grade " << b.getGrade();
	return o;
}
