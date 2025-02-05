/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:02:24 by aconvent          #+#    #+#             */
/*   Updated: 2025/02/05 16:19:27 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"

class Form
{
	private :
		const int _signing;
		const int _execute;
		const std::string _name;
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
		
		void getName();
		void getSigningGrade();
		void getExecutionGrade();
		
		

};

