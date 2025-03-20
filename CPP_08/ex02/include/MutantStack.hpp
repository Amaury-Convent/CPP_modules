
#pragma once

#include <iostream>
#include <stack>

#include "macros.hpp"
template <typename T>
class MutantStack : public std::stack<T>
{	
	public :

	MutantStack()
	{
		std::cout << DFLT CNTOR CALL << std::endl;
	}
	MutantStack(MutantStack &src)
	{
		std::cout << CPY DSTOR CALL << std::endl;
		*this = src;
	}

	MutantStack & operator=(const MutantStack &src)
	{
		std::cout << ASSOPP CALL << std::endl;
		if (this != src)
			std::stack<int>::operator=(&src);
		return (*this);
	}

	~MutantStack()
	{
		std::cout << DFLT DSTOR CALL << std::endl;
	}

	void pop()
	{
		this->c.pop_back();
	}

	typedef typename std::stack<T>::container_type::iterator iter;
	typedef typename std::stack<T>::container_type::const_iterator const_iter;

	iter begin()
	{
		return (this->c.begin());
	}

	iter end()
	{
		return (this->c.end());
	}
	
	
	const_iter begin() const
	{
		return (this->c.begin());
	}
	const_iter end() const 
	{
		return (this->c.end());
	}

};
