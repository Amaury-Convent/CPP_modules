/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:49:41 by aconvent          #+#    #+#             */
/*   Updated: 2025/02/13 12:43:36 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Form.hpp"

int main()
{
	try 
	{
		Bureaucrat m("Xavier", 110);
		Bureaucrat f("Alice", 2);
		Bureaucrat cpy(f);
		
		std::cout << f;
		std::cout << std::endl;

		Form small("rubish", 150, 1);
		Form best("CEO", 1 ,1);
		m.signForm(best);
		std::cout << std::endl;
		best.beSigned(cpy);
		cpy.signForm(best);
		std::cout << best;
		
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << BGNGRY DRKRED  "Exception is :" RST  BLD << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << BGNGRY DRKRED  "Exception is :" RST  BLD << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << BGNGRY DRKRED  "Exception is :" RST  BLD << e.what() << std::endl;
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout << BGNGRY DRKRED  "Exception is :" RST  BLD << e.what() << std::endl;
	}
}