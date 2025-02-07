/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:02:24 by aconvent          #+#    #+#             */
/*   Updated: 2025/02/07 11:48:22 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"

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
		Form(const int _signing, const int _execute);
		Form(const std::string _name);
		~Form();
		
		//overrite opperators 
		Form & operator=(const Form &src);
		
		std::string getName() const ;
		const int getSigningGrade()const ;
		const int getExecutionGrade() const;
		
		bool beSigned(const Bureaucrat &src);
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
std::ostream &operator<<(std::ostream &s, Form &form);