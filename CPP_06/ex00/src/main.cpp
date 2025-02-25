#include "../include/Converter.hpp"
#include "../include/Error.hpp"


int main(int ac, char **av)
{
	(void)av;
	try 
	{
		if (ac != 2)
			throw(Error::ArgumentCount());

	}
	catch (Error::ArgumentCount &e)
	{
		std::cout <<  e.what() << std::endl;
	}
	

}