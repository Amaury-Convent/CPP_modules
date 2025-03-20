
#pragma once

#include <iostream>
#include <stack>

template <typename T>
class MutanStack 
{	
	public :

	MutanStack();
	MutanStack(MutanStack &src);
	~MutanStack();

	MutanStack & operator=(MutanStack &src);

	

};
