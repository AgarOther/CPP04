/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:45:21 by scraeyme          #+#    #+#             */
/*   Updated: 2025/04/16 14:02:47 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice")
{
	std::cout << "An Ice spawned!" << std::endl;
}

Ice::Ice(const Ice &copy) : AMateria(copy)
{
	
}

Ice &Ice::operator=(const Ice &obj)
{
	if (&obj == this)
		return (*this);
	return (*this);
}

Ice::~Ice()
{
	std::cout << "An Ice despawned!" << std::endl;
}

AMateria *Ice::clone() const
{
	return new Ice(*this);
}
