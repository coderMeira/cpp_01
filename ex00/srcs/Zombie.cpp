//***************************//
//*Template by pulgamecanica*//
//***************************//

#include "Zombie.hpp"

Zombie::Zombie() {
	// TODO (default constructor)
}

Zombie::Zombie(const std::string name) {
	_name = name;
}

std::string Zombie::getZombieName(void) {
	return(_name);
}


Zombie::Zombie(const Zombie& param) {
	// TODO (copy constructor)
	(void)param;
}

Zombie::~Zombie() {
	std::cout << _name << " destroyed" << std::endl;
	// TODO (destructor)
}

Zombie& Zombie::operator= (const Zombie& param) {
	// TODO (Assignment operatior)
	// std::swap()
	(void)param;
	return (*this);
}

std::ostream& operator<<(std::ostream& s, const Zombie& param) {
	// s << param.CONST_METHOD()
	(void)param;
	return (s);
}

void	Zombie::announce(void){
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}

