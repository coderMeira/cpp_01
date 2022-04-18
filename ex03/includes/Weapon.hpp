//***************************//
//*Template by pulgamecanica*//
//***************************//

#ifndef __WEAPON_HPP__
# define __WEAPON_HPP__

#include <iostream>

class Weapon {
	public:
		Weapon();
		Weapon(std::string wpn);
		Weapon(const Weapon&);
		~Weapon();
		Weapon&	operator= (const Weapon&); // const for safety... not super nesessary
		const std::string& getType(void);
		void	setType(std::string type);
	private:
		std::string _type;
};

std::ostream&	operator<<(std::ostream&, const Weapon&);

#endif

