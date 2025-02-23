#pragma once

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{

	private :
		const std::string _target;
		void performaction() const override;

	public :
	
		RobotomyRequestForm(const std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		RobotomyRequestForm & operator=(const RobotomyRequestForm & src);
		~RobotomyRequestForm();
		std::string getTarget() const;
		void create_tree();

};