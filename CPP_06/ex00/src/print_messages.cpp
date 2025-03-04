#include "../include/Converter.hpp"

void inf_edge_case(std::string arg)
{
	std::cout << CHAR "Impossible" << std::endl;
	std::cout << INT "Impossible" << std::endl;
	if (arg == "+inf"  || arg == "+inff" )
		std::cout << FLOAT "+inff" << std::endl;
	else if  (arg == "-inf"  || arg == "-inff" )
		std::cout << FLOAT "-inff" << std::endl;
	if (arg == "+inf"  || arg == "+inff" )
		std::cout <<  DBL "+inf" << std::endl;
	else if  (arg == "-inf"  || arg == "-inff" )
		std::cout << DBL "-inf" << std::endl;
	
}

void nan_edge_case()
{
	std::cout << CHAR "Impossible" << std::endl;
	std::cout << INT "Impossible" << std::endl;
	std::cout << FLOAT "nanf" << std::endl;
	std::cout << DBL "nan" << std::endl;
	
}

void print_double(std::string arg)
{
	double d = std::atof(arg.c_str());
	if (d < 0 || d > 127)
		std::cout << CHAR "Impossible" << std::endl;
	else if (std::isprint(d))
		std::cout << CHAR "\'" << static_cast<char>(d) << "\'" << std::endl;
	else 
		std::cout << CHAR " Non displayable" <<std::endl;
	if (d < INT_MIN || d > INT_MAX)
		std::cout << INT "Impossible" << std::endl;
	else 
		std::cout <<  INT << static_cast<int>(d) << std::endl;
	if (d < MIN_FLOAT || d > MAX_FLOAT)
		std::cout << FLOAT "Impossible" << std::endl;
	else 
		std::cout << FLOAT << static_cast<float>(d) << "f" <<std::endl;
	if (d < MIN_DOUBLE || d > MAX_DOUBLE)
		std::cout << DBL "impossible" << std::endl;
	else
		std::cout << DBL << d << std::endl;
}

void print_int(std::string arg)
{
	int i = std::stoi(arg);

	if (i < 0 || i > 127)
		std::cout << CHAR "Impossible" << std::endl;
	else if (std::isprint(i))
		std::cout << CHAR "\'" << static_cast<char>(i) << "\'" << std::endl;
	else 
		std::cout << CHAR " Non displayable" <<std::endl;
	if (i < INT_MIN || i > INT_MAX)
		std::cout << INT "Impossible" << std::endl;
	else 
		std::cout <<  INT << static_cast<int>(i) << std::endl;
	std::cout << FLOAT << static_cast<float>(i) << "f" <<std::endl;
	std::cout << DBL << static_cast<double>(i)<< std::endl;
}

void print_float(std::string arg)
{
	float f = std::stof(arg);

	if (f < 0 || f > 127)
		std::cout << CHAR "Impossible" << std::endl;
	if (std::isprint(f))
		std::cout << CHAR "\'" << static_cast<char>(f) << "\'" << std::endl;
	else 
		std::cout << CHAR " Non displayable" <<std::endl;
	if (f < INT_MIN || f > INT_MAX)
		std::cout << INT "Impossible" << std::endl;
	else 
		std::cout <<  INT << static_cast<int>(f) << std::endl;
	std::cout << FLOAT << static_cast<float>(f) << "f" <<std::endl;
	std::cout << DBL << static_cast<double>(f)<< std::endl;
}

void print_impossible()
{
	std::cout << CHAR "Impossible" << std::endl;
	std::cout << INT "Impossible" << std::endl;
	std::cout << FLOAT "Impossible" << std::endl;
	std::cout << DBL "Impossible" << std::endl;
	
}

void print_char(char c)
{
	if (std::isprint(c))
		std::cout << CHAR " \'" <<  c << "\'" <<std::endl;
	else 
		std::cout << CHAR " Non displayable" <<std::endl;
	std::cout <<  INT << static_cast<int>(c) << std::endl;
	std::cout << FLOAT << static_cast<float>(c) << "f" <<std::endl;
	std::cout << DBL << static_cast<double>(c)<< std::endl;
}