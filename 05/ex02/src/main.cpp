#include <Bureaucrat.hpp>
#include <ShrubberyCreationForm.hpp>
#include <RobotoMyRequestForm.hpp>
#include <PresidentialPardonForm.hpp>
#include <iostream>

int main()
{
	Bureaucrat myBur("Luca", 20);

	ShrubberyCreationForm shrubbery("Home");
	RobotoMyRequestForm roboto("Roboto");
	PresidentialPardonForm presidential("Pardon");

	try {

		shrubbery.beSigned(myBur);
		roboto.beSigned(myBur);
		presidential.beSigned(myBur);

		shrubbery.Form::execute(myBur);
		roboto.Form::execute(myBur);
		presidential.Form::execute(myBur);

	} catch (std::exception &error) {
		std::cout << error.what() << std::endl;
	}
}