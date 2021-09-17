#include <ClapTrap.hpp>

ClapTrap::ClapTrap() : name("Unknown"), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "Default construct called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) : name(other.name), hitPoints(other.hitPoints), energyPoints(other.energyPoints), attackDamage(other.attackDamage) {
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->attackDamage = other.attackDamage;
	this->energyPoints = other.energyPoints;
	return (*this);
}

ClapTrap::ClapTrap(const std::string &name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "Named constructor called." << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called." << std::endl;
}

void ClapTrap::attack(const std::string &target) {
	std::cout << "ClapTrap " << name << " attacking " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << name << " took " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << name << " repaired by " << amount << " points of damage!" << std::endl;
}
