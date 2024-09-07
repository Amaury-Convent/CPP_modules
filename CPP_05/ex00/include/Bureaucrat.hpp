

#pragma once
#include <iostream>

class Bureaucrat
{
	private :
		const std::string name;
		unsigned int grade;
	public :
	// constructor and destrcutors
		Bureaucrat();
		Bureaucrat(const std::string name , int grade);
		Bureaucrat(const Bureaucrat &cpy);
		~Bureaucrat();
	//Assignement operator	
		Bureaucrat &operator=(const Bureaucrat &src);
	void getName();
	void getGrade();


};