/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:20:13 by scraeyme          #+#    #+#             */
/*   Updated: 2025/04/16 21:34:06 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource()
{
	std::cout << "A MateriaSource spawned!" << std::endl;
	for (int i = 0; i < 4; i++)
		this->templates[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	*this = copy;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &obj)
{
	if (&obj == this)
		return (*this);
	return (*this);
}

MateriaSource::~MateriaSource()
{
	std::cout << "A MateriaSource despawned!" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->templates[i] != NULL)
			delete this->templates[i];
	}
}

void MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->templates[i] == NULL)
		{
			this->templates[i] = materia;
			std::cout << "Materia " << materia->getType() << " was learned!" << std::endl;
			return;
		}
	}
	std::cout << "Materia " << materia->getType() << " couldn't be learned, inventory is full!" << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->templates[i] != NULL && this->templates[i]->getType() == type)
		{
			std::cout << "Materia " << type << " was created." << std::endl;
			return (this->templates[i]->clone());
		}
	}
	return (0);
}
