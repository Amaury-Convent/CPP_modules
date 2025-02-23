#include "../../include/Intern.hpp"


Intern::Intern()
{
	std::cout << DFLT CNTOR CALL << std::endl;
}

Intern::~Intern()
{
	std::cout << DFLT DSTOR CALL << std::endl;
}

Intern::Intern(Intern const &src)
{
	(void)src;
	std::cout << CPY CNTOR CALL << std::endl;
}