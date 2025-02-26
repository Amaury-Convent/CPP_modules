#include "../include/Converter.hpp"


void inf_edge_case(std::string arg)
{
	std::cout << "char : Impossible" << std::endl;
	std::cout << "int : Impossible" << std::endl;
	if (arg == "+inf"  || arg == "+inff" )
		std::cout << "float : +inff" << std::endl;
	else if  (arg == "-inf"  || arg == "-inff" )
		std::cout << "float : -inff" << std::endl;
	if (arg == "+inf"  || arg == "+inff" )
		std::cout << "double : +inf" << std::endl;
	else if  (arg == "-inf"  || arg == "-inff" )
		std::cout << "double : -inf" << std::endl;
	
}

void nan_edge_case()
{
	std::cout << "char : Impossible" << std::endl;
	std::cout << "int : Impossible" << std::endl;
	std::cout << "float : nanf" << std::endl;
	std::cout << "double : nan" << std::endl;
	
}


void ScalarConverter::convert(std::string arg)
{
	if (arg == "+inf" || arg == "-inf" || arg == "+inff" || arg == "-inff")
		inf_edge_case(arg);
	else if (arg == "nan")
		nan_edge_case();
	else 
	{
		
	}
}


