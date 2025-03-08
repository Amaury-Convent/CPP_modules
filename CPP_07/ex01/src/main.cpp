#include <iostream>
#include "../include/Iter.hpp"



template <typename T>
void check_odd_temp(T &t)
{
	if (t % 2 == 0)
		std::cout << "this number is even " << t << std::endl;
	else 
		std::cout << "this number is odd " << t << std::endl;
}


int main()
{
	char arr[6] = "hello";
	int tab[5] = {42, 31 , 01 , 32, 1};
	std::cout << std::endl;
	std::cout << "here is the int tab\n";
	iter(tab, 5, check_odd_temp);
	std::cout << std::endl;
	//iter(str, str.size(), check_odd);
	std::cout << std::endl;
	std::cout << "here is the string\n";
	iter(arr, 5, check_odd_temp);

}