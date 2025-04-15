/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:58:10 by scraeyme          #+#    #+#             */
/*   Updated: 2025/04/16 01:08:35 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal()
{
	std::cout << "An AAnimal spawned!" << std::endl;
	this->type = "AAnimal";
}

AAnimal::AAnimal(const AAnimal &copy)
{
	*this = copy;
}

AAnimal &AAnimal::operator=(const AAnimal &obj)
{
	if (&obj == this)
		return (*this);
	this->type = obj.type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "An AAnimal despawned!" << std::endl;
}

void AAnimal::makeSound() const
{
	std::cout << "*Unknown AAnimal noise*" << std::endl;
}

const std::string &AAnimal::getType() const
{
	return (this->type);
}

const Brain *AAnimal::getBrain() const
{
	return (NULL);
}
