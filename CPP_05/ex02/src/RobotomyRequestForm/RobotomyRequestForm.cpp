
#include "../../include/RobotomyRequestForm.hpp"


std::string RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}


void RobotomyRequestForm::performaction() const
{
	std::cout << "i will create a file" << std::endl;
}