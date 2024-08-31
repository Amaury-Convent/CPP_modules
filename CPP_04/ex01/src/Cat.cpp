/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:31:16 by aconvent          #+#    #+#             */
/*   Updated: 2024/08/31 11:41:26 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/Cat.hpp"


Cat::Cat()
{
	this->brain = new Brain;
	this->type = "Cat";
	std::cout << "Default " CAT CNTOR "called" << std::endl;
}
Cat::Cat(const Cat &cpy)
{
	this->type = cpy.gettype();
	this->brain = new Brain (*cpy.brain);
	std::cout << CAT " copy" CNTOR "called" << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << CAT DSTOR "called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "\"meow meow\"" << std::endl;
}

Cat &Cat::operator=(const Cat &src)
{
	if (this->brain)
		delete this->brain;
	this->type = src.gettype();
	this->brain = new Brain (*src.brain);
	return (*this);
}

std::string Cat::gettype() const
{
	return (this->type);
}