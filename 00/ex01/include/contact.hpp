#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
public:
	Contact();
	~Contact();
private:
	std::string name;
	std::string surname;
	std::string nickname;
	std::string phone;
	std::string secret;
public:
	std::string getName();
	std::string getSurname();
	std::string getNickname();
	std::string getPhone();
	std::string getSecret();
	void setName(std::string name);
	void setSurname(std::string surname);
	void setNickname(std::string nickname);
	void setPhone(std::string phone);
	void setSecret(std::string secret);
};

#endif
