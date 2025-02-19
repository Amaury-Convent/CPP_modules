/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaury <amaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:49:41 by aconvent          #+#    #+#             */
/*   Updated: 2025/02/19 12:35:43 by amaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/ShrubberyCreationForm.hpp"

#include "../include/RobotomyRequestForm.hpp"

#include "../include/PresidentialPardonForm.hpp"


int main()
{
		try
		{
		
		PresidentialPardonForm li("boby");
		PresidentialPardonForm lo = li;
		ShrubberyCreationForm l("hello");
		Bureaucrat il;
		Bureaucrat ceo("BOSS",1);
		RobotomyRequestForm rob("lol");
		
		std::cout << lo;
		l.beSigned(il);
		l.execute(il);
		rob.beSigned(ceo);
		rob.execute(ceo);
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << BLD DRKRED  "Exception is :" RST<< e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << BLD DRKRED  "Exception is :" RST<< e.what() << std::endl;
	}
	catch (AForm::GradeTooLowException &e)
	{
		std::cout << BLD DRKRED  "Exception is :" RST<< e.what() << std::endl;
	}
	catch (AForm::GradeTooHighException &e)
	{
		std::cout << BLD DRKRED  "Exception is :" RST<< e.what() << std::endl;
	}
	catch (ShrubberyCreationForm::FileProblemsException &e)
	{
		std::cout << BLD DRKRED  "Exception is :" RST<< e.what() << std::endl;
	}
}