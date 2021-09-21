#include <FragTrap.hpp>

FragTrap::FragTrap() : ClapTrap() {
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap default construct called." << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
	*this = other;
	std::cout << "FragTrap copy construct called." << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap named constructor called." << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called." << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->attackDamage = other.attackDamage;
	this->energyPoints = other.energyPoints;
	return (*this);
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << name << " is asking others for an highfive!" << std::endl;
}