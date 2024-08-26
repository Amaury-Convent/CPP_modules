/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 12:12:03 by aconvent          #+#    #+#             */
/*   Updated: 2024/08/26 10:59:40 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"
#include "../include/ClapTrap.hpp"
ScavTrap::ScavTrap(const std::string &name) 
	: ClapTrap(name, 100 , 50 , 20) 
{
	std::cout << "ScavTrap " CNTOR " called to create" << name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &cpy)
{
	std::cout << "ScavTrap copy " CNTOR " called" << std::endl;
	*this = cpy;
}

ScavTrap::ScavTrap() 
: ClapTrap("", 100, 50, 20)
{
	std::cout << "Scavtrap default " CNTOR " called " << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " DSTOR  " has been called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	std::cout << "Assigninement opperator called" << std::endl; 
	this->_name = src._name;
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	this->_attack_damage = src._attack_damage;
	return (*this);
}


void	ScavTrap::attack(const std::string& target)
{
		std::cout << GRN "-----------" << this->_name << " Scavtrap attack function" <<"-----------" RST << std::endl;
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
	std::cout   << CYN << _name <<  RST <<  " hits " << CYN << target << RST << " inflicting ";
	std::cout << RED << _attack_damage << RST " damage on his health !" << RST << std::endl;
	this->_energy_points--;
}

void ScavTrap::guardGate()
{
	std::cout << CYN << this->_name << RST << " entered gate Keeper mode\n";
}