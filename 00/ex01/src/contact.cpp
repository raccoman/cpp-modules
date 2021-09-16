#include <contact.hpp>
#include <utility>

Contact::Contact() {
}

Contact::~Contact() {
}

void Contact::setName(std::string name) {
	this->name = std::move(name);
}

void Contact::setSurname(std::string surname) {
	this->surname = std::move(surname);
}

void Contact::setNickname(std::string nickname) {
	this->nickname = std::move(nickname);
}

void Contact::setPhone(std::string phone) {
	this->phone = phone;
}

void Contact::setSecret(std::string secret) {
	this->secret = std::move(secret);
}

std::string Contact::getName() {
	return this->name;
}

std::string Contact::getSurname() {
	return this->surname;
}

std::string Contact::getNickname() {
	return this->nickname;
}

std::string Contact::getPhone() {
	return this->phone;
}

std::string Contact::getSecret() {
	return this->secret;
}