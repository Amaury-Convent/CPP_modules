/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:40:28 by aconvent          #+#    #+#             */
/*   Updated: 2024/08/26 11:50:16 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ScavTrap.hpp"



class FragTrap : public ClapTrap
{
	public :
	FragTrap(const std::string &name);
	FragTrap();
	FragTrap(const FragTrap &cpy);
	~FragTrap();
	
	FragTrap &operator=(const FragTrap &src);
	
	void attack(const std::string& target);
	void highFivesGuys(void);
};