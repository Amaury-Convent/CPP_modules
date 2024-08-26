/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 14:04:38 by aconvent          #+#    #+#             */
/*   Updated: 2024/08/26 11:42:29 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
 
#include "ClapTrap.hpp"
#include "macros.hpp"

class ScavTrap: public ClapTrap
{
	public :
	
	ScavTrap(const std::string &name);
	ScavTrap();
	ScavTrap(const ScavTrap &cpy);
	~ScavTrap();
	
	ScavTrap &operator=(const ScavTrap &src);
	
	void attack(const std::string& target);
	void guardGate();
};