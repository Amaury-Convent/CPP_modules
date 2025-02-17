

#include "../../include/ShrubberyCreationForm.hpp"
#include <iostream>

ShrubberyForm::ShrubberyForm(const std::string target) :
AForm("ShruberyForm", 145, 137), _target(target)
{
	std::cout << DFLT CNTOR CALL << "to create" DRKBLU << this->getTarget()<<  RST <<std::endl;
}

ShrubberyForm::~ShrubberyForm()
{
		std::cout << DSTOR CALL << "for " DRKBLU << this->_target<< std::endl;
}