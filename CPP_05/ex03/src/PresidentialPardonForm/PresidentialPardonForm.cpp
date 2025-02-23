
#include "../../include/PresidentialPardonForm.hpp"


std::string PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & src)
{
	if (this != &src)
		*this = src;
	return *this;
}


void PresidentialPardonForm::performaction() const
{
	std::cout << this->_target << "has been pardoned by Zaphod Beeblebrox." << std::endl;
}
 
