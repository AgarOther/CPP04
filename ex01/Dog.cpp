/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:58:10 by scraeyme          #+#    #+#             */
/*   Updated: 2025/04/15 17:50:09 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal()
{
	std::cout << "A Dog spawned!" << std::endl;
	this->type = "Dog";
	this->_brain = new Brain();
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
	this->_brain = new Brain(*obj.getBrain());
	return (*this);
}

Dog::~Dog()
{
	std::cout << "A Dog despawned!" << std::endl;
	delete this->_brain;
}

void Dog::makeSound() const
{
	std::cout << "*WoofWoof*" << std::endl;
}

const std::string &Dog::getType() const
{
	return (this->type);
}

const Brain *Dog::getBrain() const
{
	return (this->_brain);
}
