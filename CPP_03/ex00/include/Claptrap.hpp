/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 10:57:38 by aconvent          #+#    #+#             */
/*   Updated: 2024/07/29 12:54:25 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

# define RST "\033[0m"
# define RED "\033[31m"
# define GRN "\033[32m"
# define YLW "\033[33m"
# define BLU "\033[34m"
# define MGT "\033[35m"
# define CYN "\033[36m"
# define BLD "\033[1m"
# define MAX_HP 10
class ClapTrap
{
	private :
		std::string _name;
		unsigned int _hit_points;
	 	unsigned int _energy_points;
		unsigned int _attack_damage;
		
	public :
		// Constructor and destructor
		ClapTrap(const std::string &name);
		ClapTrap();
		ClapTrap(const ClapTrap &cpy);
		~ClapTrap();
		ClapTrap &operator=(const ClapTrap &src);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
};	