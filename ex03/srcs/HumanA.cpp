//***************************//
//*Template by pulgamecanica*//
//***************************//

#include "HumanA.hpp"
#include "Weapon.hpp"


HumanA::HumanA(std::string name, Weapon& wpn) : _weapon(wpn){
	_name = name;
	_weapon = wpn;
}

HumanA::HumanA(const HumanA& param) : _weapon(param._weapon){
	// TODO (copy constructor)
	(void)param;
}

HumanA::~HumanA() {
	std::cout << "HumanA" << " destroyed" << std::endl;
}

HumanA& HumanA::operator= (const HumanA& param) {
	// TODO (Assignment operatior)
	// std::swap()
	(void)param;
	return (*this);
}

std::ostream& operator<<(std::ostream& s, const HumanA& param) {
	// s << param.CONST_METHOD()
	(void)param;
	return (s);
}

void	HumanA::attack(void){
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
