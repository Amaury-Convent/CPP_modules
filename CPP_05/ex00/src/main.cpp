/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 14:37:26 by aconvent          #+#    #+#             */
/*   Updated: 2025/02/05 14:44:33 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

int main()
{
	Bureaucrat hello;
	Bureaucrat l("ella", 149);
	Bureaucrat he("ali", 1);
	try
	{
		std::cout << he;
		he.increment();
		l.decrement();
		std::cout << l;
		l.decrement();
		std::cout << l;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << BGNGRY DRKRED  "Exception is :" RST  BLD << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << BGNGRY DRKRED  "Exception is :" RST  BLD << e.what() << std::endl;
	}
}