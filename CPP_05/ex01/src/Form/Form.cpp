/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 09:43:30 by aconvent          #+#    #+#             */
/*   Updated: 2025/02/13 12:40:58 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/Form.hpp"

Form & Form::operator=(Form const & ref)
{
	this->_signed = ref.getSigningGrade();
	return (*this);
}


void Form::beSigned(const Bureaucrat &src) 
{
	if(src.getGrade() <= this->_signing)
		this->_signed = true;
	else
		throw (Form::GradeTooLowException());
}

const char *Form::GradeTooHighException::what() const throw()

{
	return (RED "Form : grade is to High" RST );
	
}

const char *Form::GradeTooLowException::what() const throw()
{
	return (RED "Form : grade is to low" RST);	
}

std::ostream& operator<<(std::ostream &os, Form const &form)
{
	os << DRKBLU << form.getName() << RST " has a signing grade of " RED << form.getSigningGrade() << RST;
	os << ", an execution grade of " << RED << form.getExecutionGrade()<< RST;
	os << " and is signed set to " << RED << std::boolalpha << form.getSigned() << RST << std::endl; 
	return (os);
}