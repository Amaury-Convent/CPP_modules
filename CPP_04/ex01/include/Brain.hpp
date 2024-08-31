/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 10:01:18 by aconvent          #+#    #+#             */
/*   Updated: 2024/08/31 10:26:54 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "../include/Animal.hpp"


class Brain
{
	public :
		std::string ideas[100];
		
	Brain();
	Brain(const Brain &cpy);
	~Brain();
	Brain &operator=(const Brain &src);
};
