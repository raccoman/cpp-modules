//
// Created by Roberto Boldini on 9/22/21.
//

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{

private:
	const std::string	_name;
	const unsigned int	_grade;

public:
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(std::string name, unsigned int grade);

	Bureaucrat& operator=(const Bureaucrat& other);

	std::string	getName() const;
	int			getGrade() const;

	class GradeTooHighException : public std::exception
			{
			public:
				virtual const char* what() const throw();
			};
	class GradeTooLowException : public std::exception
			{
			public:
				virtual const char* what() const throw();
			};
};


#endif //BUREAUCRAT_HPP
