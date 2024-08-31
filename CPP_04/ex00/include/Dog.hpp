/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:23:22 by aconvent          #+#    #+#             */
/*   Updated: 2024/08/28 14:05:09 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "Animal.hpp"

class Dog : protected Animal
{
	public :
		Dog();
		Dog(const Dog &cpy);
		virtual ~Dog();
	
		Dog &operator=(const Dog &src);
		
		void makeSound() const;
		std::string gettype() const;
};