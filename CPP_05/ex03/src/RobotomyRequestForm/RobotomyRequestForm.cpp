
#include "../../include/RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>


std::string RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & src)
{
	if (this != &src)
		AForm::operator=(src);
	return *this;
}

void RobotomyRequestForm::performaction() const
{
	int num = std::time(0) % 2;
		std::cout << "making some drilling noice" << std::endl;
	if (num == 0)
		std::cout << DRKBLU << this->getName() <<  GRN " has been robotomized with success" << RST << std::endl;
	else
		std::cout << DRKRED << "Failed robotomizing " << DRKBLU <<this->getName() << RST << std::endl;
}