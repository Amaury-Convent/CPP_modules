#pragma once

#include "AForm.hpp"

class PresidentialPardonForm : protected AForm
{

	private :
		const std::string _target;
		const std::string type 	= "Presidential";
		void performaction() const override;

	public :

		PresidentialPardonForm(const std::string target);
		~PresidentialPardonForm();
		void pardonPresidentialPardonForm();
		

		std::string getTarget() const;

};