//***************************//
//*Template by pulgamecanica*//
//***************************//

#include "ex01.hpp"

int	main(void)
{
	int		N = 3;
	Zombie	*monkey = zombieHorde(N, "Cranberry");

	for (int i = 0; i < N; i++)
		monkey[i].announce();
	delete [] monkey;
	return (0);
}
