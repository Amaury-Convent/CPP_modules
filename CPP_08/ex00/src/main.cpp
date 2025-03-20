
#include "../include/easyfind.hpp"
#include <vector>
#include <deque>
#include <ctime>
#include <random>

int main()
{
	srand(time(NULL));
	std::vector<int> vector ;
	for (int i = 0; i < 20 ; i++)
	{
		int trand = 1 + rand() % 20;
		vector.push_back(trand);
	}
	std::deque<int> deque;
	for (int i = 0; i < 20 ; i++)
	{
			int trand = 1 +rand() % 20;
		deque.push_back(trand);
	}

	try
	{
	std::cout << BLD DRKBLU "\t\t Vector " RST << std::endl;
	std::cout << PINK "the container contains : " RST ;
	for (int i = 0; i < 20; i++)
	{
		std::cout << vector[i] << " ";
	}
	std::cout << std::endl;
	int res = easyfind(vector , 1 + (rand() %20 ));
	std::cout << GRN "the first occurence is on pos = " RST  << res << std::endl;
	}
	catch (ErrorNotFound e)
	{
		std::cout << RED BLD "Error : " RST <<e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
	std::cout << BLD DRKBLU "\t\t deque " RST << std::endl;
	std::cout << PINK "the container contains : " RST ;
	for (int i = 0; i < 20; i++)
	{
		std::cout << deque[i] << " ";
	}
	std::cout << std::endl;
	int res = easyfind(deque , 1 + (rand() % 20));
	std::cout << GRN "the first occurence is on pos = " RST  << res << std::endl;
	}
	catch (ErrorNotFound e)
	{
		std::cout << RED BLD "Error : " RST <<e.what() << std::endl;
	}
}