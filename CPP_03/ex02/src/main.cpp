/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 11:21:17 by aconvent          #+#    #+#             */
/*   Updated: 2024/08/26 11:06:51 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"


int main ()
{
		ClapTrap tot("Clap");
		ScavTrap scav("Scav");
		ScavTrap trap(scav);
		ScavTrap test;
		ScavTrap last("testing");
		
		for (int i = 0; i < 10; i++)
		{
			if (i % 2 == 0)
				trap.takeDamage(1);
			else
				trap.beRepaired(2);
		}
		test = trap;
		test.beRepaired(10);
		test.attack("yooo");
		tot.attack("earth");
		test.takeDamage(50);
		last.beRepaired(-100);
		last.takeDamage(-10);
		for (int i = 0; i < 51; i++)
		{
			last.attack("this");
		}
		test.guardGate();
}