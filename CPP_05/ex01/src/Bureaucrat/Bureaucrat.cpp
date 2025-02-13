/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 11:57:44 by aconvent          #+#    #+#             */
/*   Updated: 2025/02/13 12:35:35 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/Bureaucrat.hpp"

void Bureaucrat::decrement()
{
	if (this->_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
	
}
void Bureaucrat::increment()
{
		throw Bureaucrat::GradeTooHighException();
	if (this->_grade >= 1)
	this->_grade--;
	
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is to High" RST );
	
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return (RED "Grade is to low" RST);
	
}

void Bureaucrat::signForm(Form &form)
{
	if (form.getSigned() && (this->getGrade() <= form.getSigningGrade()))
		std::cout << DRKBLU << this->getName() << RST " signed " DRKBLU << form.getName() << RST << std::endl;
	else
	{ 
		std::cout << DRKBLU << this->getName() << RST " couldn't sign " << DRKBLU << form.getName() << RST " because ";
		if (form.getSigned() == false)
			std::cout << "the form is not set as signable"<< std::endl;
		else
			std::cout << DRKBLU << this->getName() << RST" don't have enough power to sign it" << std::endl;
	}
}



std::ostream& operator<<(std::ostream &os, Bureaucrat const &Bur)
{
	os << DRKBLU << Bur.getName() << RST " have a grade of " << RED << Bur.getGrade() << RST << std::endl;
	return (os);
}