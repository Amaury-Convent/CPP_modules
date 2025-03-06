#include "../include/Whatever.hpp"
#include "../include/macros.hpp"
#include <string>

int main()
{
	{
	int a = 4;
	int b = 3;
	std::cout << DRKBLUBGR BLD"        testing int        " RST << std::endl; 
	std::cout << GRN BLD "\tBefore swap " RST << std::endl; 
	std::cout << "a = " << a << " b = " << b << std::endl;

	swap(a , b);
	std::cout << RED BLD "\tAfter swap " RST << std::endl; 
	std::cout << "a = " << a << " b = " << b << std::endl;

	std::cout << PINK BLD "\t Testing min and max" RST << std::endl;
	std::cout << "min = " << min(a, b) << std::endl;
	std::cout << "max = " << max(a, b) << std::endl;
	std::cout << std::endl;
	}
	{

	std::string s1 = "hello i am 1";
	std::string s2 = "hello i am 2";
	std::string s3 = "hello i am 3";

		std::cout <<  BGNYLW BLD"        testing string        " RST << std::endl; 
	std::cout << GRN BLD "\tBefore swap " RST << std::endl; 
	std::cout << "s1 = " << s1 << ", s2 = " << s2 << ", s3 = " << s3 << std::endl;

	swap(s1, s3);
	swap(s3, s2);
	std::cout << RED BLD "\tAfter swap " RST << std::endl; 
	std::cout << "s1 = " << s1 << ", s2 = " << s2 << ", s3 = " << s3 << std::endl;
	std::cout << PINK BLD "\t Testing min and max" RST << std::endl;
	std::cout << "max = " << max(s1, s3) << std::endl;
	std::cout << "min = " << min (s1, s2) << std::endl;
	}
}