/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:43:50 by aconvent          #+#    #+#             */
/*   Updated: 2024/08/28 14:19:14 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "WrongAnimal.hpp"

class WrongCat : protected WrongAnimal
{
	public :
	// constructor and destructor
		WrongCat();
		WrongCat(const WrongCat &cpy);
		virtual ~WrongCat();
	//Assignement operator
		WrongCat &operator=(const WrongCat &src);
		
		void makeSound() const;
		virtual std::string gettype() const;
};