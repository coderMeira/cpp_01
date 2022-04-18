#include "ex00.hpp"
#include "Zombie.hpp"

void	randomChump(std::string name){
	Zombie newZ(name);

	std::cout << "Creating " << newZ.getZombieName() << " statically\n";
}
