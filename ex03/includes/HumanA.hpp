//***************************//
//*Template by pulgamecanica*//
//***************************//

#ifndef __HUMANA_HPP__
# define __HUMANA_HPP__

#include <iostream>
#include "Weapon.hpp"

class HumanA {
	public:
		HumanA(std::string name, Weapon& wpn);
		HumanA(const HumanA&);
		~HumanA();
		HumanA&	operator= (const HumanA&); // const for safety... not super nesessary
		void	attack(void);
	private:
		std::string _name;
		Weapon&		_weapon;
};

std::ostream&	operator<<(std::ostream&, const HumanA&);

#endif

