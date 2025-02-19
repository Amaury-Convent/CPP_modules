#pragma once

#include "AForm.hpp"

class ShrubberyCreationForm :  public AForm
{

	private :
		const std::string _target;
		void performaction() const override;

	public :

		ShrubberyCreationForm(const std::string target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		ShrubberyCreationForm & operator=(const ShrubberyCreationForm & src);
		void create_tree();
		

		std::string getTarget() const;
	class FileProblemsException : public std::exception
	{
		public :
			const char *what() const noexcept override;
	};

};