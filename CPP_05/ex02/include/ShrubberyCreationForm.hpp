#pragma once

#include "AForm.hpp"

class ShrubberyForm :  public AForm
{

	private :
		const std::string _target;
		const std::string type 	= "Shrub";
		void performaction() const override;

	public :

		ShrubberyForm(const std::string target);
		~ShrubberyForm();
		void create_tree();
		

		std::string getTarget() const;

};