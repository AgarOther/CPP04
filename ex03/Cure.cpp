/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:45:21 by scraeyme          #+#    #+#             */
/*   Updated: 2025/04/16 14:06:34 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure() : AMateria("Cure")
{
	std::cout << "A Cure spawned!" << std::endl;
}

Cure::Cure(const Cure &copy) : AMateria(copy)
{
	
}

Cure &Cure::operator=(const Cure &obj)
{
	if (&obj == this)
		return (*this);
	return (*this);
}

Cure::~Cure()
{
	std::cout << "A Cure despawned!" << std::endl;
}

AMateria *Cure::clone() const
{
	return new Cure(*this);
}
