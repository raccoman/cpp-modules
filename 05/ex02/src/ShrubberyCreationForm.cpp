#include <ShrubberyCreationForm.hpp>

ShrubberyCreationForm::ShrubberyCreationForm() : Form() {
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("shrubbery", 145, 137) {
	_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &form) : Form(form) {
	*this = form;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

std::string ShrubberyCreationForm::getTarget() const {
	return _target;
}

void ShrubberyCreationForm::execute() const {
	std::string	filename;

	filename = _target + "_shrubbery";
	std::ofstream output(filename.c_str(), std::ios::out);

	output << "          .     .  .      +     .      .          .\n"
			  "     .       .      .     #       .           .\n"
			  "        .      .         ###            .      .      .\n"
			  "      .      .   \"#:. .:##\"##:. .:#\"  .      .\n"
			  "          .      . \"####\"###\"####\"  .\n"
			  "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .\n"
			  "  .             \"#########\"#########\"        .        .\n"
			  "        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .\n"
			  "     .     .  \"#######\"\"##\"##\"\"#######\"                  .\n"
			  "                .\"##\"#####\"#####\"##\"           .      .\n"
			  "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .\n"
			  "      .     \"#######\"##\"#####\"##\"#######\"      .     .\n"
			  "    .    .     \"#####\"\"#######\"\"#####\"    .      .\n"
			  "            .     \"      000      \"    .     .\n"
			  "       .         .   .   000     .        .       .\n"
			  ".. .. ..................O000O........................ ......\nProd. Sick Luke" << std::endl;

	output.close();

	std::cout << "Shrubbery has been planted." << std::endl;
}