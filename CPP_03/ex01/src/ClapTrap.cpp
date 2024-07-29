/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 11:05:03 by aconvent          #+#    #+#             */
/*   Updated: 2024/07/29 13:03:29 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Claptrap.hpp"



ClapTrap::ClapTrap(const std::string &name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Created a Claptrap named " GRN << this->_name << RST << std::endl;
}
ClapTrap::ClapTrap() : _name("Cl4ptr4p"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Created a Claptrap named " GRN << this->_name << RST << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor for " GRN << this->_name << RST << " has been called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &src) 
{
	std::cout << "Assigninement opperator called" << std::endl; 
	this->_name = src._name;
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	this->_attack_damage = src._attack_damage;
	return (*this);
}
void ClapTrap::attack(const std::string& target)
{
	std::cout << GRN "-----------" << this->_name << "-----------" RST << std::endl;
	if (_hit_points <= 0)
	{
		std::cout << RED BLD "ERROR : Repair your self before attacking again!!" << std::endl;
		return;
	}
	else if (_energy_points <= 0)
	{
		std::cout <<  RED BLD "ERROR : Your" RST BLU " Energy points" RST RED " are to low to do that action !!" RST << std::endl;
		return;
	}
	std::cout  << "ClapTrap " << CYN << _name <<  RST <<  " attacks " << CYN << target << RST << " causing ";
	std::cout << RED << _attack_damage << RST " points of damage !" << RST << std::endl;
	this->_energy_points--;
	
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << GRN "-----------" << this->_name << "-----------" RST << std::endl;
	unsigned int hp = this->_hit_points;
	if (amount < 0)
	{
		std::cout << RED BLD "ERROR : " RST RED "You are trying to harm your self i won't let you do that!!!" << std::endl;
		return ;
	}
	if (_hit_points >= 10)
	{
		std::cout << RED BLD "ERROR :" << RST RED "HP is allready maxed" RST << std::endl;
		return;
	}
	else if (_energy_points <= 0)
	{
		std::cout <<  RED BLD "ERROR : Your" RST BLU " Energy points" RST RED " are to low to do that action !!" RST << std::endl;
		return;
	}
	else 
	{
		std::cout << MGT BLD "Healing " RST "for " RED <<  amount << RST << std::endl;
		if (hp + amount > MAX_HP)
		{
			this->_hit_points = MAX_HP;
			std::cout << "Over healing is not taken in account you lost " RED << amount - (MAX_HP - hp) << RST " of healing"<< std::endl; 
		}
		else 
		{
			this->_hit_points = hp + amount;
			std::cout << "YOU heal your self for " RED << amount << RST << std::endl; 	
		}
		std::cout << "Your new HP = " << RED << this->_hit_points << RST << std::endl;
		this->_energy_points--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << GRN "-----------" << this->_name << "-----------" RST << std::endl;
	if (_hit_points == 0)
	{
		std::cout << RED BLD "ERROR :" RST RED "You are allready dead please heal your self" RST << std::endl;
		return ;
	}
	if (amount < 0)
	{
		std::cout << RED BLD "ERROR :" RST RED "You try to heal your self i won't allow it!!!" << std::endl;
		return ;
	}
	if (amount > _hit_points)
	{
		this->_hit_points = 0;
		std::cout << "The attack on you was so powerfull , your ennemy destroyed you and lost " RED << amount - _hit_points;
		std::cout << RST " damages in the void" << std::endl;
	}
	else
	{
		std::cout << "Your ennemy damage you for " RED << amount << RST <<  std::endl;
		this->_hit_points -= amount;
	}
	std::cout << "Your new HP = " << RED << this->_hit_points << RST <<  std::endl;
	this->_energy_points++;
}