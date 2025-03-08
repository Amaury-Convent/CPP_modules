#pragma once

# include <iostream>

template <class T>
class Array
{
	public :
		Array();
		Array(unsigned int n);
		Array(Array &src);
		Array & operator=(const Array &src);



};