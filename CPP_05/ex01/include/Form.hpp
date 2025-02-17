/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:02:24 by aconvent          #+#    #+#             */
/*   Updated: 2025/02/17 11:55:41 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private :
		std::string _name;
		const int _signing;
		const int _execute;
		bool _signed;
		
	public :
		//constructor destructor
		Form();
		Form(const std::string _name , const int _signing , const int _execute);
		Form(Form const &src);
		~Form();
		
		//overrite opperators 
		Form & operator=(const Form &src);
		
		std::string getName() const ;
		bool getSigned()const;
		int getSigningGrade()const ;
		int getExecutionGrade() const;
		
		void beSigned(const Bureaucrat &src);
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
std::ostream& operator<<(std::ostream &os, Form const &form);