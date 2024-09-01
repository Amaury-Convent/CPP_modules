/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:23:17 by aconvent          #+#    #+#             */
/*   Updated: 2024/09/01 11:29:41 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "macros.hpp"

class Animal
{
	public :
		std::string type;
	// constructor and destrcutors
		Animal();
		Animal(const Animal &cpy);
		virtual ~Animal();
	//Assignement operator	
		Animal &operator=(const Animal &src);

		virtual void makeSound() const;
		virtual std::string gettype() const;
};