/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:31:16 by aconvent          #+#    #+#             */
/*   Updated: 2024/08/28 14:19:30 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/WrongCat.hpp"


WrongCat::WrongCat()
{
	this->type = "Cat";
	std::cout << "Default " WRCA CNTOR "called" << std::endl;
}
WrongCat::WrongCat(const WrongCat &cpy)
{
	this->type = cpy.type;
	std::cout << WRCA " copy" CNTOR "called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << WRCA DSTOR "called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout <<  "\"strange barking\"" << std::endl;
}

std::string WrongCat::gettype() const
{
	return (this->type);
}