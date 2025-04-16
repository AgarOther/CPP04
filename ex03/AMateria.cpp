/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:39:01 by scraeyme          #+#    #+#             */
/*   Updated: 2025/04/16 21:21:45 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "colors.hpp"
#include <string>
#include <iostream>

AMateria::AMateria()
{
	std::cout << "AMateria unknown spawned!" << std::endl;
	this->type = "missingno";
}

AMateria::AMateria(const AMateria &copy)
{
	*this = copy;
}

AMateria &AMateria::operator=(AMateria const &obj)
{
	if (&obj == this)
		return (*this);
	return (*this);
}

AMateria::AMateria(const std::string &type)
{
	std::cout << "An AMateria of type " << type << " spawned!" << std::endl;
	this->type = type;
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
	if (this->getType() == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (this->getType() == "cure")
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	else
		std::cout << RED << "...what are you even trying to attack with???" << RESET << std::endl;
}
