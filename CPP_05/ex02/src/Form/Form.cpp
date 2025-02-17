/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 09:43:30 by aconvent          #+#    #+#             */
/*   Updated: 2025/02/13 12:40:58 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/AForm.hpp"

AForm & AForm::operator=(AForm const & ref)
{
	this->_signed = ref.getSigningGrade();
	return (*this);
}


void AForm::beSigned(const Bureaucrat &src) 
{
	if(src.getGrade() <= this->_signing)
		this->_signed = true;
	else
		throw (AForm::GradeTooLowException());
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return (RED "AForm : grade is to High" RST );
	
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return (RED "AForm : grade is to low" RST);	
}

const char *AForm::FormNotSignedException::what() const throw()
{
	return (RED "AForm : Form not signable" RST);	
}

std::ostream& operator<<(std::ostream &os, AForm const &form)
{
	os << DRKBLU << form.getName() << RST " has a signing grade of " RED << form.getSigningGrade() << RST;
	os << ", an execution grade of " << RED << form.getExecutionGrade()<< RST;
	os << " and is signed set to " << RED << std::boolalpha << form.getSigned() << RST << std::endl; 
	return (os);
}


void AForm::execute(Bureaucrat const & executor) const 
{
	if (this->getSigned() == false)
		throw(AForm::FormNotSignedException());
	if (this->getExecutionGrade() < executor.getGrade())
		throw(AForm::GradeTooLowException());

	performaction();
}