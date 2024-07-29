/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 11:21:17 by aconvent          #+#    #+#             */
/*   Updated: 2024/07/29 13:52:27 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Claptrap.hpp"



int main ()
{
	ClapTrap trap;
	ClapTrap Clap("ABC");
	ClapTrap hey(Clap);
	
	for (int i = 0; i < 11; i++)
		trap.attack("YOLO");
	Clap.beRepaired(10);
	trap.takeDamage(8);
	Clap.takeDamage(5);
	Clap.beRepaired(50);
	trap.takeDamage(5);
	Clap.takeDamage(48);
	Clap.beRepaired(0);
	for (int i = 0; i < 12 ; i++)
		Clap.beRepaired(1);
	hey.takeDamage(48);
	trap.beRepaired(5);
	hey.beRepaired(24);
}