//***************************//
//*Template by pulgamecanica*//
//***************************//

#ifndef __HUMANB_HPP__
# define __HUMANB_HPP__

#include <iostream>
#include "Weapon.hpp"

class HumanB {
	public:
		HumanB(std::string name);
		HumanB(const HumanB&);
		~HumanB();
		HumanB&	operator= (const HumanB&); // const for safety... not super nesessary
		void	attack(void);
		void	setWeapon(Weapon& wpn);
	private:
		std::string _name;
		Weapon*		_weapon;
};

std::ostream&	operator<<(std::ostream&, const HumanB&);

#endif

