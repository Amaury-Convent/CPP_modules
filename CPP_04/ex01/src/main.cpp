/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:31:21 by aconvent          #+#    #+#             */
/*   Updated: 2024/09/01 13:05:54 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongCat.hpp"
#include "../include/Brain.hpp"

int main()
{
	// {
	// 	Dog *dog = new Dog;
	// 	Cat *cat = new Cat;
		
	// 	std::cout << BGNRED "-------------- Testing right Animals --------------" RST << std::endl;
	// 	std::cout << CYN << dog->gettype() << RST " make :";
	// 	dog->makeSound();
	// 	std::cout << CYN << cat->gettype() << RST " make :";
	// 	cat->makeSound();
		
		
	// 	WrongAnimal *wrongani = new WrongAnimal;
	// 	WrongCat *wrongcat = new WrongCat;
	// 	std::cout << BGNRED "-------------- Testing wrong Animals --------------" RST << std::endl;
	// 	std::cout << CYN << wrongani->gettype() << RST " make :";
	// 	wrongani->makeSound();
	// 	std::cout << CYN << wrongcat->gettype() << RST " make :";
	// 	wrongcat->makeSound();
		
	// 	delete wrongcat;
	// 	delete wrongani;
	// 	delete dog;
	// 	delete cat;
	// }
	
	{
		Dog lola;
		Dog abu(lola);
		
		lola.comparingdogs(abu);
	}
	{
		const Animal *(dog_cat[11]);
		for (int i = 0; i < 11 ; i++)
		{
			if (i % 2 == 0)
				dog_cat[i] = new Dog();
			else 
				dog_cat[i] = new Cat();
		}
		for (int i = 0; i < 11 ; i++)
			delete dog_cat[i];
		
	}
	
}