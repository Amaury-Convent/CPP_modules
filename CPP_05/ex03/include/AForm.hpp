/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:02:24 by aconvent          #+#    #+#             */
/*   Updated: 2025/02/23 12:13:10 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private :
		std::string _name;
		const int _signing;
		const int _execute;
		bool _signed;
		virtual void performaction() const = 0;
		
	public :
		//constructor destructor
		AForm();
		AForm(const std::string _name , const int _signing , const int _execute);
		AForm(AForm const &src);
		~AForm();
		
		//overrite opperators 
		virtual AForm & operator=(const AForm &src);
		
		virtual std::string getName() const ;
		virtual bool getSigned()const;
		virtual int getSigningGrade()const ;
		virtual int getExecutionGrade() const;
		void execute(Bureaucrat const & executor) const;
		
		virtual void beSigned(const Bureaucrat &src);
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
	class FormNotSignedException : public std::exception
	{
		public :
			const char *what() const noexcept override;
	};	

};
std::ostream& operator<<(std::ostream &os, AForm const &form);