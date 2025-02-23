/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form_get_set.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:51:47 by aconvent          #+#    #+#             */
/*   Updated: 2025/02/14 11:14:32 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/AForm.hpp"

std::string AForm::getName() const
{
	return (this->_name);
}

int AForm::getSigningGrade() const
{
	return this->_signing;
}
bool AForm::getSigned() const
{
	return (this->_signed);
}


int AForm::getExecutionGrade() const
{
	return (this->_execute);
}