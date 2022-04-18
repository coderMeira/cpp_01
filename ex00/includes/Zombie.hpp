//***************************//
//*Template by pulgamecanica*//
//***************************//

#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__

#include <iostream>

class Zombie {
	public:
		Zombie();
		Zombie(std::string name);
		Zombie(const Zombie&);
		~Zombie();
		Zombie&		operator= (const Zombie&); // const for safety... not super nesessary
		void		announce(void);
		Zombie*		newZombie(std::string name);
		void		randomChump(std::string name);
		std::string	getZombieName(void);

	private:
		std::string	_name;
};

std::ostream&	operator<<(std::ostream&, const Zombie&);

#endif

