//***************************//
//*Template by pulgamecanica*//
//***************************//

#include "ex00.hpp"
#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombie_ptr;

	zombie_ptr = newZombie("Zombie_1");
	zombie_ptr->announce();
	randomChump("Zombie_2");
	std::cout << "zombie 1 name = " << zombie_ptr->getZombieName() << std::endl;
	delete zombie_ptr;
	return (0);
}
