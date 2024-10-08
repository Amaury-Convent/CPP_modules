/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 11:21:17 by aconvent          #+#    #+#             */
/*   Updated: 2024/08/26 10:36:12 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"



int main ()
{
	ClapTrap trap;
	ClapTrap Clap("ABC");
	ClapTrap hey(Clap);
	
	for (int i = 0; i < 21; i++)
	{
		if (i % 2 == 0)
			Clap.attack("YOLO");
		else
			trap.takeDamage(2);
	}
	hey = trap;
	hey.beRepaired(20);
	trap.beRepaired(-10);
	trap.beRepaired(10);
}