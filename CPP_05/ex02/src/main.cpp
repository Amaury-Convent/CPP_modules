/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:49:41 by aconvent          #+#    #+#             */
/*   Updated: 2025/02/18 11:42:17 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"

int main()
{
		try
		{
		
		ShrubberyCreationForm l("hello");
		Bureaucrat il;
		RobotomyRequestForm rob();
		
		l.beSigned(il);
		l.execute(il);
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