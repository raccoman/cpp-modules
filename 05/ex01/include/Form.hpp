#ifndef FORM_HPP
#define FORM_HPP

#include <Convertable.hpp>
#include <iostream>

class Bureaucrat;

class Form {

private:
	const std::string	name;
	bool				_signed;
	const unsigned int	gradeSign;
	const unsigned int	gradeExecute;

public:
	Form();
	~Form();
	Form(const std::string& name, unsigned int gradeSign, unsigned int gradeExecute);
	Form(const Form& form);
	Form& operator=(const Form& other);

	std::string		getName() const;
	bool			isSigned() const;
	unsigned int	getSignGrade() const;
	unsigned int	getExecuteGrade() const;

	void beSigned(const Bureaucrat& bureaucrat);

	class GradeTooHighException : public std::exception {
	public:
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		virtual const char* what() const throw();
	};

};

std::ostream& operator<< (std::ostream& o, const Form& b);

#endif
