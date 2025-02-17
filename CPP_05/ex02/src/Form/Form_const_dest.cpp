/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm_const_dest.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:50:21 by aconvent          #+#    #+#             */
/*   Updated: 2025/02/13 11:57:15 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../../include/AForm.hpp"

AForm::AForm() :
 _name("AForm"),_signing (120), _execute(140), _signed(false)
{
	if (_signing > 150 || _execute > 150)
		throw (AForm::GradeTooLowException());
	if (_signing < 1 || _execute < 1)
		throw AForm::GradeTooHighException();
	std::cout << DFLT << "AForm " << CNTOR CALL <<  std::endl;
	std::cout <<DRKBLU <<  _name  << RST " has been created with the grades to sign ";
	std::cout << RED << _signing << RST << " and to execute " << RED << _execute << RST << std::endl; 
}

AForm::AForm(const std::string name ,const  int _signing , const int _execute) :
_name(name), _signing (_signing), _execute(_execute), _signed(false)
{
	if (_signing > 150 || _execute > 150)
		throw (AForm::GradeTooLowException());
	if (_signing < 1 || _execute < 1)
		throw (AForm::GradeTooHighException());
	std::cout << PAR << "AForm " << CNTOR CALL <<  std::endl;
	std::cout <<DRKBLU <<  _name  << RST " has been created with the grades to sign ";
	std::cout << RED << _signing << RST << " and to execute " << RED << _execute << RST << std::endl; 
}


AForm::AForm(AForm const &src) :
 _name(src.getName()), _signing(src.getSigningGrade()) , _execute(src.getExecutionGrade())
{
	this->_signed = src._signed;
	std::cout << CPY "AForm " CNTOR CALL << std::endl;
	std::cout <<DRKBLU <<  _name  << RST " has been created with the grades to sign ";
	std::cout << RED << _signing << RST << " and to execute " << RED << _execute << RST << std::endl;
}
AForm::~AForm()
{
	std::cout << DFLT "AForm " DSTOR CALL<< std::endl;
}