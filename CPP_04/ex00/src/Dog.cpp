/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:31:18 by aconvent          #+#    #+#             */
/*   Updated: 2024/08/31 13:08:56 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Default " DOG CNTOR << std::endl;
}
Dog::Dog(const Dog &cpy) : Animal(cpy)
{
	this->type = cpy.type;
	std::cout << DOG "copy " CNTOR << std::endl;
}

Dog::~Dog()
{
	std::cout << DOG DSTOR << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "\"Woof Woof \"" << std::endl;
}

std::string Dog::gettype() const
{
	return (this->type);
}