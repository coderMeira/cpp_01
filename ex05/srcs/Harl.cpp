//***************************//
//*Template by pulgamecanica*//
//***************************//

#include "Harl.hpp"

Harl::Harl() {
	// TODO (default constructor)
}

Harl::Harl(const Harl& param) {
	// TODO (copy constructor)
	(void)param;
}

Harl::~Harl() {
	std::cout << "Harl" << " destroyed" << std::endl;
	// TODO (destructor)
}

Harl& Harl::operator= (const Harl& param) {
	// TODO (Assignment operatior)
	// std::swap()
	(void)param;
	return (*this);
}

std::ostream& operator<<(std::ostream& s, const Harl& param) {
	// s << param.CONST_METHOD()
	(void)param;
	return (s);
}

void	Harl::debug(void){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void	Harl::info(void){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void	Harl::warning(void){
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming foryears whereas you started working here since last month.\n";
}

void	Harl::error(void){
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}
