/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:23:22 by aconvent          #+#    #+#             */
/*   Updated: 2024/08/31 10:41:03 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : protected Animal , public Brain
{
	private : 
		Brain *brain;
		
	public :
		Dog();
		Dog(const Dog &cpy);
		virtual ~Dog();
	
		Dog &operator=(const Dog &src);
		
		void makeSound() const;
		std::string gettype() const;
		Brain *getBrain() const;
};