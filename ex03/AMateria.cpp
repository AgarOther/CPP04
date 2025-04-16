/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:39:01 by scraeyme          #+#    #+#             */
/*   Updated: 2025/04/16 14:14:23 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <string>
#include <iostream>

AMateria::AMateria()
{
	std::cout << "AMateria unknown spawned!" << std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
	*this = copy;
}

AMateria &AMateria::operator=(AMateria const &obj)
{
	if (this == &obj)
		return (*this);
	
	return (*this);
}

AMateria::AMateria(const std::string &name)
{
	std::cout << "An AMateria spawned!" << std::endl;
	
}

AMateria::~AMateria()
{
	std::cout << "An AMateria destroyed!" << std::endl;
}

std::string const &AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter &target)
{
	if (this->type == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
	else if (this->type == "cure")
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	else
		std::cout << "...what are you even trying to attack with???" << std::endl;
}
