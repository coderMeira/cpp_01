//***************************//
//*Template by pulgamecanica*//
//***************************//

#include "Weapon.hpp"

Weapon::Weapon(){
}

Weapon::Weapon(std::string wpn) {
	_type = wpn;
}

Weapon::Weapon(const Weapon& param) {
	// TODO (copy constructor)
	(void)param;
}

Weapon::~Weapon() {
	std::cout << "Weapon" << " destroyed" << std::endl;
	// TODO (destructor)
}

Weapon& Weapon::operator= (const Weapon& param) {
	// TODO (Assignment operatior)
	// std::swap()
	(void)param;
	return (*this);
}

std::ostream& operator<<(std::ostream& s, const Weapon& param) {
	// s << param.CONST_METHOD()
	(void)param;
	return (s);
}

const std::string& Weapon::getType(void){
	return (_type);
}

void	Weapon::setType(std::string type){
	_type = type;
}
