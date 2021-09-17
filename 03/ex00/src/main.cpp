#include <ClapTrap.hpp>

int main() {

	ClapTrap rob("Rob");
	ClapTrap jimmy("Jimmy");

	jimmy = rob;

	jimmy.attack("Jimmy");
	jimmy.beRepaired(10);
	jimmy.takeDamage(20);

	return 0;
}