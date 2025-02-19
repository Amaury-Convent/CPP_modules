

#include "../../include/PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(const std::string target) :
AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << DFLT CNTOR CALL << "to create" DRKBLU << this->getTarget()<<  RST <<std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : AForm(src), _target(src.getTarget())
{
	std::cout << CPY CNTOR CALL << "to create" DRKBLU << this->getTarget()<<  RST <<std::endl;
	
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << DSTOR CALL << "for " DRKBLU << this->_target << RST<< std::endl;
}