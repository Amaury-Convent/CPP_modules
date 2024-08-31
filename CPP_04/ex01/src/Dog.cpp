/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:31:18 by aconvent          #+#    #+#             */
/*   Updated: 2024/08/31 11:36:16 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog()
{
	this->brain = new Brain;
	this->type = "Dog";
	std::cout << "Default " DOG  CNTOR "called" << std::endl;
}
Dog::Dog(const Dog &cpy)
{
	this->type = cpy.gettype();
	this->brain = new Brain (*cpy.brain);
	std::cout << DOG " copy" CNTOR "called" << std::endl;
}

Dog::~Dog()
{
	delete (this->brain);
	std::cout << DOG DSTOR "called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "\"Woof Woof \"" << std::endl;
}

Dog &Dog::operator=(const Dog &src)
{
	if (this->brain)
		delete this->brain;
	this->type = src.gettype();
	this->brain = new Brain (*src.getBrain());
	return (*this);
}


std::string Dog::gettype() const
{
	return (this->type);
}