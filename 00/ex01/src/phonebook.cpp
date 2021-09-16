#include <phonebook.hpp>

Phonebook::Phonebook() {
}

Phonebook::~Phonebook() {
}

void Phonebook::addContact(const Contact& contact) {
	this->contacts.push_back(contact);
}

int Phonebook::getCount() {
	return contacts.size();
}

Contact Phonebook::getContact(int index) {
	return contacts[index];
}