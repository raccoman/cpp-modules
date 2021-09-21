#include <DiamondTrap.hpp>

int main() {

	DiamondTrap rob1("Rob");
	DiamondTrap jimmy1("Jimmy");

	jimmy1 = rob1;

	jimmy1.attack("Jimmy");
	jimmy1.beRepaired(10);
	jimmy1.takeDamage(20);
	jimmy1.whoAmI();

	return 0;
}