
#include "../../include/PresidentialPardonForm.hpp"


std::string PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

void PresidentialPardonForm::performaction() const
{
	std::cout << "i will create a file" << std::endl;
}

