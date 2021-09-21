#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
public:
	ClapTrap();
	ClapTrap(ClapTrap const &other);
	ClapTrap(std::string const &name);
	virtual ~ClapTrap();
	ClapTrap &operator=(ClapTrap const &other);
	virtual void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
protected:
	std::string name;
	unsigned int hitPoints;
	unsigned int energyPoints;
	unsigned int attackDamage;
};

#endif
