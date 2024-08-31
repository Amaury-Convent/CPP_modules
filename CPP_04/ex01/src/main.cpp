/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:31:21 by aconvent          #+#    #+#             */
/*   Updated: 2024/08/31 11:48:32 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongCat.hpp"
#include "../include/Brain.hpp"

int main()
{
	{
		Animal *animal = new Animal;
		Dog *dog = new Dog;
		Cat *cat = new Cat;
		
		std::cout << BGNRED "-------------- Testing right Animals --------------" RST << std::endl;
		std::cout << CYN << animal->gettype() << RST " make :";
		animal->makeSound();
		std::cout << CYN << dog->gettype() << RST " make :";
		dog->makeSound();
		std::cout << CYN << cat->gettype() << RST " make :";
		cat->makeSound();
		
		delete cat;
		delete dog;
		delete animal;
		
		WrongAnimal *wrongani = new WrongAnimal;
		WrongCat *wrongcat = new WrongCat;
		std::cout << BGNRED "-------------- Testing wrong Animals --------------" RST << std::endl;
		std::cout << CYN << wrongani->gettype() << RST " make :";
		wrongani->makeSound();
		std::cout << CYN << wrongcat->gettype() << RST " make :";
		wrongcat->makeSound();
		
		delete wrongcat;
		delete wrongani;
	}
	{
		Animal *dog_cat[11];
		for (int i = 0; i < 11 ; i++)
		{
			if (i % 2 == 0)
				dog_cat[i] = new Dog();
		}
		
		
	}
	
}