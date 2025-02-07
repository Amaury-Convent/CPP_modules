/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 11:57:44 by aconvent          #+#    #+#             */
/*   Updated: 2025/02/07 11:12:16 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Bob"), _grade(120)
{
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	std::cout << DFLTCNTOR << std::endl;
	
}

Bureaucrat::Bureaucrat(const std::string name , unsigned int grade) : _name(name), _grade(grade)
{
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	std::cout << PARCNTOR << std::endl;
	
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
 	this->_name = src._name;
	this->_grade = src._grade;
 	std::cout << CPYCNTOP  << std::endl;
}
Bureaucrat::~Bureaucrat()
{
	std::cout << DFLTDSTOR  << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
	this->_name = src._name;
	this->_grade = src._grade;
	return(*this);
}

void Bureaucrat::decrement()
{
	if (this->_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
	
}
void Bureaucrat::increment()
{
	if (this->_grade >= 1)
		throw Bureaucrat::GradeTooHighException();
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

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

std::ostream& operator<<(std::ostream &os, Bureaucrat const &Bur)
{
	os << Bur.getName() << " have a grade of " << Bur.getGrade() << std::endl;
	return (os);
}