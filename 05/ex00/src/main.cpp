#include <Bureaucrat.hpp>
#include <iostream>

int main()
{
	try {
		Bureaucrat troppoAlto("GradoAlto", 0);
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	try {
		Bureaucrat troppoBasso("GradoBasso", 151);
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	Bureaucrat alto("Grade2", 2);
	Bureaucrat basso("Grade149", 149);

	try {
		alto.incrementGrade();
		alto.incrementGrade();
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	try {
		basso.decrementGrade();
		basso.decrementGrade();
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	std::cout << "Output test >> " << alto << "." << std::endl;
	return 0;
}