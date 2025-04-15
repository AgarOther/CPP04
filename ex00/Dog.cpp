/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:58:10 by scraeyme          #+#    #+#             */
/*   Updated: 2025/04/15 17:24:37 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal()
{
	std::cout << "A Dog spawned!" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &copy)
{
	*this = copy;
}

Dog &Dog::operator=(const Dog &obj)
{
	if (&obj == this)
		return (*this);
	this->type = obj.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "A Dog despawned!" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "*WoofWoof*" << std::endl;
}

const std::string &Dog::getType() const
{
	return (this->type);
}
