/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:45:21 by scraeyme          #+#    #+#             */
/*   Updated: 2025/04/16 21:32:24 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character()
{
	std::cout << "A Character spawned!" << std::endl;
	this->_name = "Unknown";
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(const std::string &name)
{
	std::cout << "Character " << name << " spawned!" << std::endl;
	this->_name = name;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(const Character &copy)
{
	this->_name = copy.getName();
	for (int i = 0; i < 4; i++)
	{
		if (copy.inventory[i] != NULL)
			delete copy.inventory[i];
	}
	for (int i = 0; i < 4; i++)
		this->inventory[i] = copy.inventory[i]->clone();
}

Character &Character::operator=(const Character &obj)
{
	if (&obj == this)
		return (*this);
	this->_name = obj.getName();
	for (int i = 0; i < 4; i++)
	{
		if (obj.inventory[i] != NULL)
			delete obj.inventory[i];
	}
	for (int i = 0; i < 4; i++)
		this->inventory[i] = obj.inventory[i]->clone();
	return (*this);
}

Character::~Character()
{
	std::cout << "A Character despawned!" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] != NULL)
			delete this->inventory[i];
	}
}

const std::string &Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			std::cout << "Materia " << m->getType() << " was equiped by " << this->getName() << "." << std::endl;
			return;
		}
	}
	std::cout << "Materia " << m->getType() << " couldn't be equiped to character " << this->getName() << "." << std::endl;
}

void Character::unequip(int idx)
{
	AMateria *materia = this->inventory[idx];

	this->inventory[idx] = NULL;
	std::cout << "Materia " << materia->getType() << " was unequiped by " << this->getName() << "." << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	this->inventory[idx]->use(target);
}
