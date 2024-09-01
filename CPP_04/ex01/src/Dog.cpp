/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:31:18 by aconvent          #+#    #+#             */
/*   Updated: 2024/09/01 13:15:20 by aconvent         ###   ########.fr       */
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
	this->brain = new Brain (*src.brain);
	return (*this);
}


std::string Dog::gettype() const
{
	return (this->type);
}


void Dog::comparingdogs(const Dog &other_dog)
{
	
	std::cout << DRKBLUBGR BLD"----------------- testing memory addresses -----------------" RST << std::endl;
	std::cout << "for the first " DOG  MEMADR " is :" << BLD YLW << &this->brain << RST<< std::endl;
	std::cout << "for the second " DOG MEMADR " is :" << BLD YLW << &other_dog.brain << RST <<std::endl;
	std::cout << "\n\n";
	std::cout << DRKBLUBGR BLD"----------------- testing the brain message -----------------" RST << std::endl;
	std::cout << RED BLD "this message is red \t" RST BLD DRKRED "this message is red to" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		if (i == 0)
			std::cout << BLD "first " DOG " message\t\t" RST "| " BLD  "\tsecond " DOG " message" << std::endl;	
		std::cout << this->brain->ideas[i] << BLD "\t|\t" RST << other_dog.brain->ideas[i] << std::endl ;
	}
}