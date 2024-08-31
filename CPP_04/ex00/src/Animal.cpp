/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:31:14 by aconvent          #+#    #+#             */
/*   Updated: 2024/08/31 13:08:32 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal()
{
	this->type = "general Animal";
	std::cout << "Default " ANI CNTOR << std::endl;
}
Animal::Animal(const Animal &cpy)
{
	this->type = cpy.type;
	std::cout << ANI "copy " CNTOR  << std::endl;
}

Animal::~Animal()
{
	std::cout << ANI DSTOR  << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "random sound generated" << std::endl;
}

std::string Animal::gettype() const
{
	return (this->type);
}