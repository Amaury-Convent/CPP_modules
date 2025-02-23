/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:49:41 by aconvent          #+#    #+#             */
/*   Updated: 2025/02/23 12:37:47 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/Intern.hpp"

int main()
{
	try
	{
		Bureaucrat a("Bob", 13);
		Bureaucrat b("CEO", 1);
		Intern lo;
		AForm *Robot = lo.makeform("RobotomyRequestForm", "him"); 
		Robot->beSigned(a);
		std::cout << *Robot;
		Robot->execute(a);
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
	catch (AForm::FormNotSignedException &e)
	{
		std::cout << BLD DRKRED  "Exception is :" RST<< e.what() << std::endl;
	}
	catch (Intern::FormnotexistingException &e)
	{
		std::cout << BLD DRKRED  "Exception is :" RST<< e.what() << std::endl;
	}
}

