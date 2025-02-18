
#include "../../include/PresidentialPardonForm.hpp"


std::string PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

void PresidentialPardonForm::performaction() const
{
	std::cout << this->_target << "has been pardoned by Zaphod Beeblebrox." << std::endl;
}
 
