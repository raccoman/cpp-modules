#include <Bureaucrat.hpp>
#include <Form.hpp>
#include <iostream>

int main()
{
	Bureaucrat myBur("Luca", 100);
	Form myForm("Luca's Form", 10, 15);
	Form myForm2("Luca's Form 2", 140, 15);

	try {

		myBur.signForm(myForm);
		myBur.signForm(myForm2);

	} catch (std::exception &error) {
		std::cout << error.what() << std::endl;
	}
}