/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:43:45 by aconvent          #+#    #+#             */
/*   Updated: 2024/08/26 12:22:55 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) 
	: ClapTrap(name, 100 , 100 , 20) 
{
	std::cout << "FragTrap " CNTOR " called to create" << name << std::endl;
}

FragTrap::FragTrap(const FragTrap &cpy)
{
	std::cout << "FragTrap copy " CNTOR " called" << std::endl;
	*this = cpy;
}

FragTrap::FragTrap() 
: ClapTrap("", 100, 100, 20)
{
	std::cout << "Fragtrap default " CNTOR " called " << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " DSTOR  " has been called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
	std::cout << "Assigninement opperator called" << std::endl; 
	this->_name = src._name;
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	this->_attack_damage = src._attack_damage;
	return (*this);
}

void	FragTrap::attack(const std::string& target)
{
		std::cout << GRN "-----------" << this->_name << " FragTrap attack function" <<"-----------" RST << std::endl;
	if (_hit_points <= 0)
	{
		std::cout << ERR  RED " : Repair your self before attacking again!!" << std::endl;
		return;
	}
	else if (_energy_points <= 0)
	{
		std::cout <<  ERR RED " : Your" RST BLU " Energy points" RST RED " are to low to do that action !!" RST << std::endl;
		return;
	}
	std::cout   << CYN << _name <<  RST <<  " deal to " << CYN << target << RST RED << _attack_damage << RST " points of damage !" << RST << std::endl;
	this->_energy_points--;
}


void	FragTrap::highFivesGuys()
{
	std::cout << BLU <<  this->_name << "called every one for a high Five!!!! Successfully" << std::endl;
}