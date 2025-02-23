#pragma once

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{

	private :
		const std::string _target;
		void performaction() const override;

	public :
		PresidentialPardonForm(const std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &src);
		PresidentialPardonForm & operator=(const PresidentialPardonForm &src);
		~PresidentialPardonForm();
		void pardonPresidentialPardonForm();
		std::string getTarget() const;
};