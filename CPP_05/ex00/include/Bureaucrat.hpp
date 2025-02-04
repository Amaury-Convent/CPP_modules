/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:37:42 by aconvent          #+#    #+#             */
/*   Updated: 2025/02/04 14:25:23 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
# include <string>
# include <exception>
#include "macros.hpp"

class Bureaucrat 
{
	private : 
		std::string _name;
		unsigned int _grade;
	public :
	// constructor and destrcutors
		Bureaucrat();
		Bureaucrat(const std::string name , unsigned int grade);
		Bureaucrat(const Bureaucrat &cpy);
		~Bureaucrat();
	//Assignement operator	
		Bureaucrat &operator=(const Bureaucrat &src);
		std::string getName() const;
		int getGrade() const ;
		void increment();
		void decrement();
		
	//ctach messages
	
	class GradeTooHighException : public std::exception
	{
		public :
			const char *what() const noexcept override;
	};
	class GradeTooLowException : public std::exception
	{
		public :
			const char *what() const noexcept override;
	};


};
std::ostream& operator<<(std::ostream& os, Bureaucrat const &Bur);