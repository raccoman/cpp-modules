#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon {

public:
	explicit Weapon(const std::string& type);
	~Weapon();
	const std::string &getType() const;
	bool setType(const std::string &type);
private:
	std::string type;
};

#endif
