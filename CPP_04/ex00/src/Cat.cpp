/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:31:16 by aconvent          #+#    #+#             */
/*   Updated: 2024/08/31 13:08:36 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/Cat.hpp"


Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Default " CAT CNTOR << std::endl;
}
Cat::Cat(const Cat &cpy) : Animal(cpy)
{
	this->type = cpy.type;
	std::cout << CAT "copy " CNTOR << std::endl;
}

Cat::~Cat()
{
	std::cout << CAT DSTOR << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "\"meow meow\"" << std::endl;
}

std::string Cat::gettype() const
{
	return (this->type);
}