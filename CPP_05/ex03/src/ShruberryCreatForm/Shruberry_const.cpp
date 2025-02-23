

#include "../../include/ShrubberyCreationForm.hpp"
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) :
AForm("ShruberyForm", 145, 137), _target(target)
{
	std::cout << DFLT CNTOR CALL << "to create " DRKBLU << this->getTarget()<<  RST <<std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm(src), _target(src.getTarget())
{
	std::cout << CPY CNTOR CALL << "to create " DRKBLU << this->getTarget()<<  RST <<std::endl;
	
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << DSTOR CALL << "for " DRKBLU << this->_target << RST<< std::endl;
}