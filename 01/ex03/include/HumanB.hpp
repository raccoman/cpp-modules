#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <Weapon.hpp>
#include <string>
#include <iostream>

class HumanB {
public:
	explicit HumanB(std::string name);
	~HumanB();
	void attack();
	void setWeapon(Weapon &weapon);
private:
	std::string name;
	Weapon *weapon;
};

#endif
