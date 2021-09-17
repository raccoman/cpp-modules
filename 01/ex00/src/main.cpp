#include <Zombie.hpp>

int	main() {

	std::cout << "Creating the first Zombie, Robert, \"manually\"" << std::endl;
	{
		Zombie	robert("Robert");
		robert.announce();
	}

	std::cout << "Creating the second Zombie, Georges, using the function newZombie" << std::endl;
	{
		Zombie	*georges = newZombie("Georges");
		georges->announce();
		delete georges;
	}
	{
		std::cout << "Creating the third Zombie, Mark, using the function randomChump" << std::endl;
		randomChump("Mark");
	}
}