/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form_get_set.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:51:47 by aconvent          #+#    #+#             */
/*   Updated: 2025/02/11 16:49:50 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/Form.hpp"

std::string Form::getName() const
{
	return (this->_name);
}

int Form::getSigningGrade() const
{
	return this->_signing;
}
bool Form::getSigned() const
{
	return (this->_signed);
}


int Form::getExecutionGrade() const
{
	return (this->_execute);
}