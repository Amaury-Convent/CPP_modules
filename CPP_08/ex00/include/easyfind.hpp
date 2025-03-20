
#pragma once
#include <iostream>
#include <exception>
#include "macros.hpp"

class ErrorNotFound : public std::exception
{
		public : 
			const char *what() const noexcept override
			{
				return ( RED "Number not found " RST );
			}
};

/*
	to get the value of an iterator you need to dereference it by using the * 
*/

template<typename cont>
int easyfind(cont &container, int val)
{
	size_t i = 0;

	std::cout << "the number i'm looking for is = ";
	std::cout << val << std::endl;
	while (i < container.size())
	{
		if (container[i] == val)
			return (i);
		i++;
	}

	if (i == container.size())
		throw ErrorNotFound();	
	return (-1);
}
