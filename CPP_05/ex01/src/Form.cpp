/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 09:43:30 by aconvent          #+#    #+#             */
/*   Updated: 2025/02/07 12:11:06 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.hpp"

Form::Form() :
 _name("Aform"),_signing (120), _execute(140), _signed(false)
{
	if (_signing > 150 || _execute > 150)
		throw (Bureaucrat::GradeTooLowException());
	if (_signing < 1 || _execute < 1)
		throw Bureaucrat::GradeTooHighException();
	std::cout << DFLTCNTOR << std::endl;
	std::cout <<DRKBLU <<  _name  << RST " has been created with the grades to sign ";
	std::cout << RED << _signing << RST << " and to execute " << RED << _execute << RST << std::endl; 
}

Form::Form(const std::string name ,const  int _signing , const int _execute) : 
_name(name), _signing (_signing), _execute(_execute), _signed(false)
{
	if (_signing > 150 || _execute > 150)
		throw (Form::GradeTooLowException());
	if (_signing < 1 || _execute < 1)
		throw (Form::GradeTooHighException());
	std::cout << PARCNTOR<< std::endl;
	std::cout <<DRKBLU <<  _name  << RST " has been created with the grades to sign ";
	std::cout << RED << _signing << RST << " and to execute " << RED << _execute << RST << std::endl; 
}


Form::Form(Form const &src) :
_signing(src._signing) , _execute(src._execute), _name(src._name)
{
	
}
Form::~Form()
{
	std::cout << DFLTDSTOR  << std::endl;
}

Form & Form::operator=(Form  const & src)
{
	this->_signing = src.getSigningGrade();
	return (*this);
}

Form & Form::operator=(Form const & ref)
{
	this->_signed = ref.getSigningGrade();
	return (*this);
}


std::string Form::getName() const
{
	return (this->_name);
}

const int Form::getSigningGrade() const
{
	return this->_signing;
}

bool Form::beSigned(const Bureaucrat &src)

{
	return (src.getGrade() <= getSigningGrade());
}

const char *Form::GradeTooHighException::what() const throw()

{
	return (RED "Form : grade is to High" RST );
	
}

const char *Form::GradeTooLowException::what() const throw()

{
	return (RED "Form : grade is to low" RST);	
}

int main()
{
	Form a;
	
	try 
	{
		Form b("foming", 12, 1110);
	}
		catch (Form::GradeTooLowException &e)
	{
		std::cout << BGNGRY DRKRED  "Exception is :" RST  BLD << e.what() << std::endl;
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout << BGNGRY DRKRED  "Exception is :" RST  BLD << e.what() << std::endl;
	}
}