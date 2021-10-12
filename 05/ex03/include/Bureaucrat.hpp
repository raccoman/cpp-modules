#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <Form.hpp>
#include <iostream>

class Form;

class Bureaucrat {

private:
	const std::string	_name;
	unsigned int		_grade;

public:
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(std::string name, unsigned int grade);
	Bureaucrat(const Bureaucrat& bureaucrat);
	Bureaucrat& operator=(const Bureaucrat& other);

	std::string		getName() const;
	unsigned int	getGrade() const;

	void	incrementGrade();
	void	decrementGrade();

	void	signForm(Form form);

	class GradeTooHighException : public std::exception {
	public:
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		virtual const char* what() const throw();
	};

};

std::ostream& operator<< (std::ostream& o, const Bureaucrat& b);

#endif
