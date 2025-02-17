#pragma once

#include "AForm.hpp"

class RobotomyRequestForm : protected AForm
{

	private :
		const std::string _target;
		const std::string type 	= "Robot";
		void performaction() const override;

	public :
	
		RobotomyRequestForm(const std::string target);
		~RobotomyRequestForm();
		std::string getTarget() const;
		void create_tree();

};