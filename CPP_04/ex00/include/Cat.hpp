/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:23:19 by aconvent          #+#    #+#             */
/*   Updated: 2024/08/28 14:07:45 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "Animal.hpp"

class Cat : protected Animal
{
	public :
	// constructor and destructor
		Cat();
		Cat(const Cat &cpy);
		virtual ~Cat();
	//Assignement operator
		Cat &operator=(const Cat &src);
		
		void makeSound() const;
		std::string gettype() const;
};