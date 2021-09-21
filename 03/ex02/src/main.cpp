#include <FragTrap.hpp>

int main() {

	FragTrap rob1("Rob");
	FragTrap jimmy1("Jimmy");

	jimmy1 = rob1;

	jimmy1.attack("Jimmy");
	jimmy1.beRepaired(10);
	jimmy1.takeDamage(20);
	jimmy1.highFivesGuys();

	return 0;
}