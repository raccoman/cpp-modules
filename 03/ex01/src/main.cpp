#include <ClapTrap.hpp>
#include <ScavTrap.hpp>

int main() {

	ScavTrap rob1("Rob");
	ScavTrap jimmy1("Jimmy");

	jimmy1 = rob1;

	jimmy1.attack("Jimmy");
	jimmy1.beRepaired(10);
	jimmy1.takeDamage(20);
	jimmy1.guardGate();

	return 0;
}