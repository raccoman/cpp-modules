#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <ClapTrap.hpp>

class FragTrap : virtual public ClapTrap {
public:
	FragTrap();
	FragTrap(FragTrap const &other);
	FragTrap(std::string const &name);
	~FragTrap();
	FragTrap &operator=(FragTrap const &other);
	void highFivesGuys();
};

#endif
