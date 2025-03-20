#include "../include/MutantStack.hpp"


int main()
{
	srand(time(NULL));

	MutantStack<int> myStack;
	for (int i = 0; i < 10 ; i++)
	{
		int trand = 1 + rand() % 100;
		myStack.push(trand);
	}
	MutantStack<int>::iter it_end = myStack.end();
	MutantStack<int>::iter it = myStack.begin();
	std::cout << "the last element of the stack is " << *it_end << "\n";
	std::cout << "what is contained in the stack" << "\n";
	for (size_t i = 0 ; i < myStack.size();i++)
	{
		std::cout << *it << " ";
		it++;
	}
	std::cout << "\n";
	std::cout << BLU "top =" RST << myStack.top() << std::endl;
	std::cout << GRN "size = " RST << myStack.size() << std::endl;

	std::cout << "popping 1 number"<< "\n";
	myStack.pop();

	std::cout << BLU "top =" RST << myStack.top() << std::endl;
	std::cout << GRN "size = " RST << myStack.size() << std::endl;
	
	it = myStack.begin();
	it_end = myStack.end();

	std::cout << "the last element of the stack is " << *it_end << "\n";
	std::cout << "what is contained in the stack" << "\n";
	for (size_t i = 0 ; i < myStack.size();i++)
	{
		std::cout << *it << " ";
		it++;
	}
	std::cout << "\n";
}

