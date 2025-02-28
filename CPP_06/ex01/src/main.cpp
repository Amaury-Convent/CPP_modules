#include "../include/Serialize.hpp"

int main()
{
	Data test;
	test.str = "hello my name is \n";
	test.lettres = 42;

	std::cout << "the adress of data =" << &test << std::endl ;
	std::cout << test.str << std::endl;
	std::cout << test.lettres << std::endl; 

	Serialize serie;

	Data *reserialized = serie.unserialize(serie.serialize(&test));

	std::cout << "the adress of data =" << reserialized << std::endl ;
	std::cout << reserialized->str << std::endl;
	std::cout << reserialized->lettres << std::endl; 
}