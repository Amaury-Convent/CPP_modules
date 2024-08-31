/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:31:21 by aconvent          #+#    #+#             */
/*   Updated: 2024/08/31 13:07:22 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongCat.hpp"

int main()
{
		Animal *animal = new Animal;
		Dog *dog = new Dog;
		Dog milou(*dog);
		Cat *cat = new Cat;
		
		std::cout << BGNRED "-------------- Testing right Animals --------------" RST << std::endl;
		std::cout << DRKBLU << animal->gettype() << RST " make :";
		animal->makeSound();
		std::cout << ORG << dog->gettype() << RST " make :";
		dog->makeSound();
		std::cout << PINK << cat->gettype() << RST " make :";
		cat->makeSound();
		
		delete cat;
		delete dog;
		delete animal;
		std::cout << "\n\n\n";
		WrongAnimal *wrongani = new WrongAnimal;
		WrongCat *wrongcat = new WrongCat;
		std::cout <<  DRKBLUBGR RED "-------------- Testing wrong Animals --------------" RST << std::endl;
		std::cout << DRKBLU<< wrongani->gettype() << RST " make :";
		wrongani->makeSound();
		std::cout << DRKBLU << wrongcat->gettype() << RST " make :";
		wrongcat->makeSound();
		
		delete wrongcat;
		delete wrongani;
	
}