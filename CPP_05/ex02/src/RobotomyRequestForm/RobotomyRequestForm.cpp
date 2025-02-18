
#include "../../include/RobotomyRequestForm.hpp"
#include <cstdlib>


std::string RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}


void RobotomyRequestForm::performaction() const
{
	int time = rand();

	if (time %2 == 0)
		std::cout << "i got here" << std::endl;
	else 
		std::cout << "no way it worked" << std::endl;
}