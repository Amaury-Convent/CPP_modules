/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat_const_dest.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:48:21 by aconvent          #+#    #+#             */
/*   Updated: 2025/02/13 12:04:09 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Bob"), _grade(120)
{
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	std::cout << DFLT << " Bureaucrat "<< CNTOR CALL << std::endl;
	std::cout << DRKBLU << _name << RST " has been created with a grade of " RED << _grade << RST << std::endl;
	
}

Bureaucrat::Bureaucrat(const std::string name , unsigned int grade) : _name(name), _grade(grade)
{
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	std::cout << PAR << " Bureaucrat"<< CNTOR CALL << std::endl;
	std::cout << DRKBLU << _name << RST " has been created with a grade of " RED << _grade << RST << std::endl;
	
}

Bureaucrat::~Bureaucrat()
{
	std::cout << DFLT << "Bureaucrat " << DSTOR CALL << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy) :
_name(cpy.getName() + "_copy") , _grade(cpy.getGrade() - 1)
{
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
 	std::cout << CPY << " Bureaucrat"<< CNTOR CALL << std::endl;
	std::cout << DRKBLU << _name << RST " has been created with a grade of " RED << _grade << RST << std::endl;
}