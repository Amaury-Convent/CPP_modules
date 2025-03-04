#include "../include/Converter.hpp"

ScalarConverter::ScalarConverter()
{}

ScalarConverter::~ScalarConverter()
{}
ScalarConverter::ScalarConverter(ScalarConverter & src)
{
	*this = src;
}

ScalarConverter & ScalarConverter::operator=(ScalarConverter &sc)
{
	if (this != &sc)
        *this = sc;
	return (*this);
}



void check_num(std::string arg)
{
	size_t sign = 0;
	int dot = 0;
	int non_int = 0;

	if (arg[sign] == '-' || arg[sign] == '+')
		sign++;
	for (size_t i = 0 + sign;  i < arg.size() - 1; i++)
	{

		if (arg[i] == '.')
			dot++;
		if (!std::isdigit(arg[i]) && arg[i] != '.')
			non_int++;
	}
	if (std::isdigit(arg[arg.size() - 1]) && dot == 0 && non_int == 0 && arg.size() < 12)
		print_int(arg);
	else if (arg[arg.size() - 1] == 'f' && non_int == 0 )
		print_float(arg);
	else if (std::isdigit(arg[arg.size() - 1]) && non_int == 0)
		print_double(arg);
	else 
		print_impossible();
}

int parse_arg(std::string arg)
{
	std::cout << arg  << arg.length() << std::endl;
	if ((arg.length() == 3 && arg[0] == arg[2] && arg[0] == '\''))
		print_char(arg[1]);
	if (arg.size() == 1 && !std::isdigit(arg[0]))
		print_char(arg[0]);
	else 
		check_num(arg);
	return (0);
}

void ScalarConverter::convert(std::string arg)
{
	if (arg == "+inf" || arg == "-inf" || arg == "+inff" || arg == "-inff")
		inf_edge_case(arg);
	else if (arg == "nan")
		nan_edge_case();
	parse_arg(arg);
}


