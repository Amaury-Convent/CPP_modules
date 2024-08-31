/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:31:14 by aconvent          #+#    #+#             */
/*   Updated: 2024/08/27 13:46:00 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "general WrongAnimal";
	std::cout << "Default " WRAN CNTOR "called" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &cpy)
{
	this->type = cpy.type;
	std::cout << WRAN " copy" CNTOR "called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << WRAN DSTOR "called" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "this sound don't look right" << std::endl;
}

std::string WrongAnimal::gettype() const
{
	return (this->type);
}