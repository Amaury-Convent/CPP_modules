/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWronganimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:43:53 by aconvent          #+#    #+#             */
/*   Updated: 2024/08/28 12:57:52 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class WrongAnimal
{
	protected :
		std::string type;
	
	public :
	// constructor and destrcutors
		WrongAnimal();
		WrongAnimal(const WrongAnimal &cpy);
		virtual ~WrongAnimal();
	//Assignement operator	
		//WrongAnimal &operator=(const WrongAnimal &src);

		virtual void makeSound() const;
		virtual std::string gettype() const;	
};