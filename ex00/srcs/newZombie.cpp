#include "ex00.hpp"
#include "Zombie.hpp"

Zombie	*newZombie(std::string name){
	Zombie *newZ = new Zombie(name);

	return (newZ);
}
