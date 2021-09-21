#include <ScavTrap.hpp>

ScavTrap::ScavTrap() : ClapTrap() {
	this->gateMode = false;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap default construct called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other), gateMode(other.gateMode) {
	*this = other;
	std::cout << "ScavTrap copy construct called." << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
	this->gateMode = false;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap named constructor called." << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->attackDamage = other.attackDamage;
	this->energyPoints = other.energyPoints;
	this->gateMode = other.gateMode;
	return (*this);
}

void ScavTrap::guardGate() {
	this->gateMode = !gateMode;
	std::cout << "ScavTrap " << (gateMode ? "entered" : "left") << " Gate keeper mode" << std::endl;
}