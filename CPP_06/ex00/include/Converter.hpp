#pragma once 

#include <iostream>
#include <cmath>
#include <string>
#include <cstring> 
#include <cctype> 
#include <iomanip>
#include "macros.hpp"

# define MIN_INT std::numeric_limits<int>::min() 
# define MAX_INT std::numeric_limits<int>::max() 
# define MIN_FLOAT std::numeric_limits<float>::min() 
# define MAX_FLOAT std::numeric_limits<float>::max() 
# define MIN_DOUBLE std::numeric_limits<double>::min() 
# define MAX_DOUBLE std::numeric_limits<double>::max()

class ScalarConverter 
{
	public :
	ScalarConverter();
	~ScalarConverter();
	ScalarConverter(ScalarConverter & src);
	ScalarConverter & operator=(ScalarConverter &sc);
	static void convert(std::string t_str);
};

void print_float(std::string arg);
void print_int(std::string arg);
void print_double(std::string arg);
void inf_edge_case(std::string arg);
void nan_edge_case();
void print_impossible();
void print_char(char c);
