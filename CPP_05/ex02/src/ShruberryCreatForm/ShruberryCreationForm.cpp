
#include "../../include/ShrubberyCreationForm.hpp"


std::string ShrubberyForm::getTarget() const
{
	return (this->_target);
}

void ShrubberyForm::performaction()  const
{
	std::cout << "i will create a file" << std::endl;
}