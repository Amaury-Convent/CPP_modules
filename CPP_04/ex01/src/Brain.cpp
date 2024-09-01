/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 10:19:13 by aconvent          #+#    #+#             */
/*   Updated: 2024/09/01 13:08:34 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain()
{
	for(int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
			ideas[i] = "I am";
		else
			ideas[i] = "Braining";
	}
	std::cout << "Default " BRAIN  CNTOR "called" << std::endl;
}
Brain::Brain(const Brain &cpy)
{
	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
			this->ideas[i] = cpy.ideas[i] + RED " copying" RST;
		else
			this->ideas[i] = RED "the " RST + cpy.ideas[i] ;

	}
	std::cout << BRAIN "copy " CNTOR "called" << std::endl;
}
Brain::~Brain()
{
	std::cout << BRAIN DSTOR "called" << std::endl;
}


Brain &Brain::operator=(const Brain &src)
{
	for(int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
	std::cout << BRAIN DSTOR "called" << std::endl;
	return (*this);
}