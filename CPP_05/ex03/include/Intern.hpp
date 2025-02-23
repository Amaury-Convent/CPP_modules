#include "AForm.hpp"


class Intern
{
	private :

	public :
		Intern();
		~Intern();
		Intern(Intern const &src);

		Intern & operator=(const Intern &src);
		AForm *makeform(std::string form, std::string target);
		class FormnotexistingException : public std::exception
	{
		public :
			const char *what() const noexcept override;
	};

};