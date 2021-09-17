#include <Zombie.hpp>

void announceAllZombies(Zombie *zombieHorde, size_t numberOfZombies) {
	for (size_t i = 0; i < numberOfZombies; i++) {
		zombieHorde[i].announce();
	}
}

int main() {
	std::cout << "Creating the first Zombie horde of Roberts" << std::endl;
	{
		Zombie	*firstZombieHorde = zombieHorde(4, "Robert");
		announceAllZombies(firstZombieHorde, 4);
		delete [] firstZombieHorde;
	}
}