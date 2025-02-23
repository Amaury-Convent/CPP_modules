#include "../../include/Intern.hpp"
#include "../../include/PresidentialPardonForm.hpp"
#include "../../include/ShrubberyCreationForm.hpp"
#include "../../include/RobotomyRequestForm.hpp"

Intern & Intern::operator=(const Intern &src)
{
	(void)src;
	return (*this);
}

AForm *makePresident(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm *makeShrubbery(const std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm *makerobot(const std::string target)
{
	return (new RobotomyRequestForm(target));
}

const char *Intern::FormnotexistingException::what() const throw()
{
	return (RED "the form given doesn't exist" RST);	
}

AForm * Intern::makeform(const std::string create_form, const std::string target)
{
	AForm *(* all_forms[])(const std::string target) = {&makePresident, &makeShrubbery, &makerobot};
	std::string forms[] = {"PresidentialPardonForm", "ShrubberyCreationForm" , "RobotomyRequestForm"};

	for (int i = 0; i < 3; i++)
	{
		if (create_form == forms[i])
			return (all_forms[i](target));
	}
	throw (Intern::FormnotexistingException());
}