#include "../include/A.hpp"
#include "../include/B.hpp"
#include "../include/C.hpp"
#include <cstdlib>

Base::~Base() {}

Base *generate()
{

	srand((unsigned) time(NULL));
	int i = rand() % 3;

	if (i == 0)
	{
		std::cout << "class B has been created\n" << std::endl;
		return (new B());
	}
	else if (i == 2)
		{
		std::cout << "class C has been created\n" << std::endl;
		return (new C());
	}
	std::cout << "class A has been created\n" << std::endl;
		return (new A());
}

void identify (Base *ptr)
{
	Base *check = dynamic_cast<A*>(ptr);
	if (check)
	{
		std::cout << "Class A has beed detected" << std::endl;
		return ;
	}
	check = dynamic_cast<B*>(ptr);
	if (check)
	{
		std::cout << "Class B has beed detected" << std::endl;
		return ;
	}
	check = dynamic_cast<C*>(ptr);
	if (check)
	{
		std::cout << "Class C has beed detected\n" << std::endl;
		return ;
	}
	std::cout << "I'm to stupid to create program that work" << std::endl;
}

void identify (Base &ref)
{
	try
	{
		A &checkA = dynamic_cast<A&>(ref);
		(void)checkA;
		std::cout << "this reference a class A" << std::endl;
	}
	catch (std::exception &e) 
	{
	}
	try 
	{
		B &checkB = dynamic_cast<B&>(ref);
		(void)checkB;
		std::cout << "this reference a class B" << std::endl;
	}
	catch (std::exception &e) 
	{
	}
	try 
	{
		C &checkC = dynamic_cast<C&>(ref);
		(void)checkC;
		std::cout << "this reference a class C" << std::endl;
	}
	catch (std::exception &e) 
	{
	}
}
int main()
{
	Base *base = generate();

	identify(base);
	identify(*base);
}