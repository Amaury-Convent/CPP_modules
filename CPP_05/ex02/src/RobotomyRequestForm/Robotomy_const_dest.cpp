

#include "../../include/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string target) :
AForm("Robotomy", 72, 45), _target(target)
{
	std::cout << DFLT CNTOR CALL << "to create" DRKBLU << this->getTarget()<<  RST <<std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
		std::cout << DSTOR CALL << "for " DRKBLU << this->_target<< std::endl;
}