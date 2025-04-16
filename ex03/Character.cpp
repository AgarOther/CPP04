/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:45:21 by scraeyme          #+#    #+#             */
/*   Updated: 2025/04/16 14:29:51 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character()
{
	std::cout << "A Character spawned!" << std::endl;
	this->_name = "Unknown";
}

Character::Character(const std::string &name)
{
	std::cout << "A Character spawned!" << std::endl;
	this->_name = name;
}

Character::Character(const Character &copy)
{
	
}

Character &Character::operator=(const Character &obj)
{
	if (&obj == this)
		return (*this);
	return (*this);
}

Character::~Character()
{
	std::cout << "A Character despawned!" << std::endl;
}

const std::string &Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	
}

void Character::unequip(int idx)
{
	
}

void Character::use(int idx, ICharacter& target)
{
	this->inventory[idx]->use(target);
}
