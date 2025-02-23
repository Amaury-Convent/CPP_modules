/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:37:42 by aconvent          #+#    #+#             */
/*   Updated: 2025/02/14 11:30:26 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
# include <string>
# include <exception>
#include "macros.hpp"
#include "AForm.hpp"

class AForm;

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
		
	//getter and setters
		/*
			getter are being set as const telling that the function
			won't modifie the values
		*/
		int getGrade() const ;
		std::string getName() const;
		
		void signForm(AForm &Form);
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