//***************************//
//*Template by pulgamecanica*//
//***************************//

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name){
	_name = name;
}

HumanB::HumanB(const HumanB& param) {
	// TODO (copy constructor)
	(void)param;
}

HumanB::~HumanB() {
	std::cout << "HumanB" << " destroyed" << std::endl;
	// TODO (destructor)
}

HumanB& HumanB::operator= (const HumanB& param) {
	// TODO (Assignment operatior)
	// std::swap()
	(void)param;
	return (*this);
}

std::ostream& operator<<(std::ostream& s, const HumanB& param) {
	// s << param.CONST_METHOD()
	(void)param;
	return (s);
}

void	HumanB::attack(void){
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& wpn){
	_weapon = &wpn;
}

