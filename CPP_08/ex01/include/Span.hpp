#pragma once

#include <iostream>
#include <vector>
#include "macros.hpp"

class Error 
{
	public : 
	class ImputNotValid : public std::exception
	{
		public :
		const char *what() const noexcept override
		{
			return ( RED "impossible to init a tab with values smaller than 2" RST );
		}
	};
	class FullTab : public std::exception
	{
		public :
		const char *what() const noexcept override
		{
			return ( RED "Tab is full" RST );
		}
	}; 
	class ToSmallTab : public std::exception
	{
		public :
		const char *what() const noexcept override
		{
			return ( RED "Tab is to small to have a span" RST );
		}
	}; 

};

class Span 
{
	private :
		int _max;
		int _curr;
		std::vector<int> _vect;
	public :
		Span(int max);
		~Span();
		Span(Span &src);
		void add_number(int num);
		Span & operator=(const Span &src);

		int ShortestSpan();
		int LongestSpan();

		void PrintTab();
		
};