/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:31:16 by aconvent          #+#    #+#             */
/*   Updated: 2024/09/02 12:01:18 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/WrongCat.hpp"


WrongCat::WrongCat()
{
	this->type = "Cat";
	std::cout << "Default " WRCA CNTOR "called" << std::endl;
}
WrongCat::WrongCat(const WrongCat &cpy) : WrongAnimal(cpy)
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
	WrongAnimal::makeSound();
}

std::string WrongCat::gettype() const
{
	return (this->type);
}