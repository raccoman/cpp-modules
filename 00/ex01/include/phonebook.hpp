#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <vector>
#include <contact.hpp>

class Phonebook {
public:
	Phonebook();
	~Phonebook();
private:
	std::vector<Contact> contacts;
public:
	void addContact(const Contact& contact);
	int getCount();
	Contact getContact(int index);
};

#endif
