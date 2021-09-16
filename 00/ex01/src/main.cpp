#include <phonebook.hpp>
#include <iostream>
#include <iomanip>

bool is_number(const std::string& s)
{
	std::string::const_iterator it = s.begin();
	while (it != s.end() && std::isdigit(*it)) ++it;
	return !s.empty() && it == s.end();
}

int main() {
	Phonebook phonebook;

	std::cout << "Phonebook - Choose one command:" << std::endl;
	std::cout << "	ADD - Add a contact to your phonebook" << std::endl;
	std::cout << "	SEARCH - Show all your contacts" << std::endl;
	std::cout << "	EXIT - Close the phonebook" << std::endl;

	std::string input;
	std::cout << "Command: ";
	while (std::getline(std::cin, input)) {

		if (input == "ADD") {

			Contact contact;

			std::cout << "First Name: ";
			std::getline(std::cin, input);
			contact.setName(input);

			std::cout << "Last Name: ";
			std::getline(std::cin, input);
			contact.setSurname(input);

			std::cout << "Nickname: ";
			std::getline(std::cin, input);
			contact.setNickname(input);

			std::cout << "Phone Number: ";
			std::getline(std::cin, input);
			contact.setPhone(input);

			std::cout << "Darkest Secret: ";
			std::getline(std::cin, input);
			contact.setSecret(input);

			phonebook.addContact(contact);
			std::cout << "Successfully added " << contact.getNickname() << " to phonebook." << std::endl;
			std::cout << "Command: ";
			continue;
		}

		if (input == "SEARCH") {

			if (phonebook.getCount() <= 0) {
				std::cout << "You don't have any contacts yet." << std::endl;
				std::cout << "Command: ";
				continue;
			}

			std::cout << "|" << std::setw(10) << "Index";
			std::cout << "|" << std::setw(10) << "First Name";
			std::cout << "|" << std::setw(10) << "Last Name";
			std::cout << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
			std::cout << "|----------|----------|----------|----------|" << std::endl;
			for (int i = 0; i < phonebook.getCount(); ++i) {
				std::cout << "|" << std::setw(10) << i;
				std::cout << "|" << std::setw(10) << phonebook.getContact(i).getName();
				std::cout << "|" << std::setw(10) << phonebook.getContact(i).getSurname();
				std::cout << "|" << std::setw(10) << phonebook.getContact(i).getNickname() << "|" << std::endl;
				std::cout << "|----------|----------|----------|----------|" << std::endl;
			}

			std::cout << "Enter an index: ";
			while (getline(std::cin, input)) {

				if (!is_number(input)) {
					std::cout << "Enter a valid index: ";
					continue;
				}

				int index = std::stoi(input);
				if (phonebook.getCount() <= index) {
					std::cout << "Enter a valid index: ";
					continue;
				}

				Contact contact = phonebook.getContact(index);
				std::cout << "First Name: " << contact.getName() << std::endl;
				std::cout << "Last Name: " << contact.getSurname() << std::endl;
				std::cout << "Nickname: " << contact.getNickname() << std::endl;
				std::cout << "Phone: " << contact.getPhone() << std::endl;
				std::cout << "Secret: " << contact.getSecret() << std::endl;
				break;
			}
			continue;
		}

		if (input == "EXIT") {
			std::cout << "Bye, bye." << std::endl;
			break;
		}

		std::cout << "Unknown command." << std::endl;
		std::cout << "Command: ";
	}
}