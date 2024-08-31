/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:23:17 by aconvent          #+#    #+#             */
/*   Updated: 2024/08/28 14:06:08 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "macros.hpp"

class Animal
{
	protected :
		std::string type;
	
	public :
	// constructor and destrcutors
		Animal();
		Animal(const Animal &cpy);
		virtual ~Animal();
	//Assignement operator	
		//Animal &operator=(const Animal &src);

		virtual void makeSound() const;
		virtual std::string gettype() const;
};