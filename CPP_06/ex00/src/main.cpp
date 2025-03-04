#include "../include/Converter.hpp"
#include "../include/Error.hpp"


# include <iostream>
# include <iomanip>
# include <exception>
# include <cstdlib>
# include <limits>
# include <cmath>

int main(int ac, char **av)
{
	try 
	{
		std::cout << MAX_INT << std::endl;
		if (ac != 2)
			throw(Error::ArgumentCount());
		ScalarConverter::convert(av[1]);
	}
	catch (Error::ArgumentCount &e)
	{
		std::cout <<  e.what() << std::endl;
	}
	

}