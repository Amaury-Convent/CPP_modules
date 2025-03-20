#include "../include/Span.hpp"

Span::Span(int max)  : _max(max) , _curr(0)
{
	if (max < 1)
		throw Error::ImputNotValid();
	std::cout << PAR CNTOR CALL " to create a tab of max " <<  _max << " values" << std::endl;
}

Span::~Span()
{
	std::cout << DSTOR CALL << std::endl;
}

Span::Span(Span &src)
{
	std::cout << CPY CNTOR CALL << std::endl;
	this->_max = src._max;
	this->_curr = src._curr;
	this->_vect = src._vect;
}
Span & Span::operator=(const Span &src)
{
	std::cout << ASSOPP CALL << std::endl;
	if (this != &src)
	{
		this->_max = src._max;
		this->_curr = src._curr;
		this->_vect = src._vect;
	}
	return (*this);
}
void Span::add_number(int num)
{
	if(this->_curr == this->_max)
		throw Error::FullTab();
	_vect.push_back(num);
	_curr++;

}

void	Span::PrintTab()
{
	for (int i = 0; i < this->_curr; i++)
	{
		std::cout << this->_vect[i] << " ";
	}
	std::cout << std::endl;
}
int Span::ShortestSpan()
{
	if (_curr < 2)
		throw Error::ToSmallTab();
	std::sort(_vect.begin(), _vect.end());
	int min = _vect[1] - _vect[0];
	for (size_t i = 2; i < _vect.size(); i++)
	{
		if (_vect[i] - _vect[i - 1] < min)
			min = _vect[i] - _vect[i - 1];
	}
	return (min);
}

int Span::LongestSpan()
{
	if (_curr < 2)
		throw Error::ToSmallTab();
	std::sort(_vect.begin(), _vect.end());
	return (_vect[_vect.size() - 1] - _vect[0]);
}
int main ()
{
	srand(time(NULL));
	try 
	{
		Span test(100);
		for (int i = 0; i < 10 ; i++)
		{
			int trand = 1 + rand() % 10000;
			test.add_number(trand);
		}
		std::cout << "shortest span = " << test.ShortestSpan() << std::endl;
		test.PrintTab();
		Span copy(test);
		Span oper(10);
		oper = copy;
		copy.PrintTab();
		oper.PrintTab();
	}
	catch (std::exception &e)
	{
		std::cout << BLD DRKRED "Error : " RST << e.what() << std::endl;
	}
	std::cout << std::endl;
	try 
	{
		Span work(10000000);
		for (int i = 0; i < 1000000 ; i++)
		{
			int trand = 1 + rand() % 10000;
			work.add_number(trand);
		}
		std::cout << "shortest span = " << work.ShortestSpan() << std::endl;
		std::cout << "longest span = " << work.LongestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << BLD DRKRED "Error : " RST << e.what() << std::endl;
	}

}