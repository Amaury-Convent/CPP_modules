#include "../include/Error.hpp"

const char * Error::ArgumentCount::what() const throw()
{
	return (RED BLD "Error : " RST RED "the program only accept 1 argument");
}