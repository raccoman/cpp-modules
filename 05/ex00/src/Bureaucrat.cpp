#include <Convertable.hpp>

Bureaucrat::Bureaucrat() {
	std::cout << "Default constructor called." << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Default destructor called." << std::endl;
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
