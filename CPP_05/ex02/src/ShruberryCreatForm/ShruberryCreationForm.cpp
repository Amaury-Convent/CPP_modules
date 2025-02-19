
#include "../../include/ShrubberyCreationForm.hpp"
#include <fstream>

std::string ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}


const char *ShrubberyCreationForm::FileProblemsException::what() const throw()
{
	return (RED "the file has some troubles" RST);	
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & src)
{
	if (this != &src)
		AForm::operator=(src);
	return *this;
}


void ShrubberyCreationForm::performaction()  const
{
	std::ofstream outfile (this->_target + "_shruberry");

	if (!outfile || !outfile.is_open())
		throw (ShrubberyCreationForm::FileProblemsException());
	outfile << "        *        \n";
    outfile << "       ***       \n";
    outfile << "      *****      \n";
    outfile << "     *******     \n";
    outfile << "    *********    \n";
    outfile << "   ***********   \n";
    outfile << "       |||        \n";
    outfile << "       |||        \n";
	outfile << "-----------------\n";
	outfile.close();
}