#pragma once 

#include <iostream>
#include <cmath>
#include <string>
#include <cstring> 
#include <cctype> 
#include <iomanip>
#include "macros.hpp"

#define FLOAT_MIN std::numeric_limits<float>::lowest()
#define FLOAT_MAX std::numeric_limits<float>::max()

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
