/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:37:42 by aconvent          #+#    #+#             */
/*   Updated: 2025/02/11 15:58:02 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
# include <string>
# include <exception>
#include "macros.hpp"
#include "Form.hpp"

class Form;

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
		
		void signForm(Form &Form);
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