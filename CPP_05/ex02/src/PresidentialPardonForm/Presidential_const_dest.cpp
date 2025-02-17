

#include "../../include/PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(const std::string target) :
AForm("ShruberyForm", 145, 137), _target(target)
{
	std::cout << DFLT CNTOR CALL << "to create" DRKBLU << this->getTarget()<<  RST <<std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << DSTOR CALL << "for " DRKBLU << this->_target<< std::endl;
}