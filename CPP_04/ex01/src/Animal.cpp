/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:31:14 by aconvent          #+#    #+#             */
/*   Updated: 2024/08/31 11:37:37 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal()
{
	this->type = "general Animal";
	std::cout << "Default " ANI CNTOR "called" << std::endl;
}
Animal::Animal(const Animal &cpy)
{
	this->type = cpy.type;
	std::cout << ANI " copy" CNTOR "called" << std::endl;
}


Animal &Animal::operator=(const Animal &src)
{
	this->type = src.type;
	return (*this);
}


Animal::~Animal()
{
	std::cout << ANI DSTOR "called" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "random sound generated" << std::endl;
}


std::string Animal::gettype() const
{
	return (this->type);
}