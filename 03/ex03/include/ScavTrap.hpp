#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <ClapTrap.hpp>

class ScavTrap : virtual public ClapTrap {
public:
	ScavTrap();
	ScavTrap(ScavTrap const &other);
	ScavTrap(std::string const &name);
	~ScavTrap();
	ScavTrap &operator=(ScavTrap const &other);
	void guardGate();
private:
	bool gateMode;
};

#endif
