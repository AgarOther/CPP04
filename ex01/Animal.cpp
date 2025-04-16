/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:58:10 by scraeyme          #+#    #+#             */
/*   Updated: 2025/04/16 13:28:59 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal()
{
	std::cout << "An Animal spawned!" << std::endl;
	this->type = "Animal";
}

Animal::Animal(const Animal &copy)
{
	*this = copy;
}

Animal &Animal::operator=(const Animal &obj)
{
	if (&obj == this)
		return (*this);
	this->type = obj.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "An Animal despawned!" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "*Unknown Animal noise*" << std::endl;
}

const std::string &Animal::getType() const
{
	return (this->type);
}

const Brain *Animal::getBrain() const
{
	return (NULL);
}
