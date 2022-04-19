//***************************//
//*Template by pulgamecanica*//
//***************************//

#ifndef __HARL_HPP__
# define __HARL_HPP__

#include <iostream>

class Harl {
	public:
		Harl();
		Harl(const Harl&);
		~Harl();
		Harl&	operator= (const Harl&); // const for safety... not super nesessary
		void	complain( std::string level );
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

std::ostream&	operator<<(std::ostream&, const Harl&);

#endif
