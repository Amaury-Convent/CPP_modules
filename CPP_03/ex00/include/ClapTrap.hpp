/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 10:57:38 by aconvent          #+#    #+#             */
/*   Updated: 2024/08/26 10:42:57 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "macros.hpp"

class ClapTrap
{
	private :
		std::string _name;
		int _hit_points;
	 	int _energy_points;
		int _attack_damage;
		
	public :
		// Constructor and destructor
		ClapTrap(const std::string &name);
		ClapTrap();
		ClapTrap(const  ClapTrap &cpy);
		~ClapTrap();
		ClapTrap &operator=(const ClapTrap &src);
		void attack(const std::string& target);
		void takeDamage(int amount);
		void beRepaired(int amount);
		
};	