/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:20:13 by scraeyme          #+#    #+#             */
/*   Updated: 2025/04/16 14:22:32 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource()
{
	std::cout << "A MateriaSource spawned!" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	
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
}

void MateriaSource::learnMateria(AMateria *materia)
{

}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	
}
