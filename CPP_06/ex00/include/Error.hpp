#pragma once

#include <string>
#include "macros.hpp"

class Error
{
	public :

	class ArgumentCount : public std::exception
	{
		public : 
			const char *what() const noexcept override;
	};
	class GradeTooLowException : public std::exception
	{
		public :
			const char *what() const noexcept override;
	};
};