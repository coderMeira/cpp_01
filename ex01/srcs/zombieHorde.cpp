#include "ex01.hpp"
#include "Zombie.hpp"

Zombie*    zombieHorde(int N, std::string name){
	Zombie *newZ = new Zombie[N];

	for (int i = 0; i < N; i++)
		newZ[i].assign(name);
	return (newZ);
}
