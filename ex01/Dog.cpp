/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:58:10 by scraeyme          #+#    #+#             */
/*   Updated: 2025/04/16 13:26:30 by scraeyme         ###   ########.fr       */
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

Dog::Dog(const Dog &copy) : Animal()
{
	this->type = copy.type;
	this->_brain = new Brain(*copy.getBrain());
}

Dog &Dog::operator=(const Dog &obj)
{
	if (&obj == this)
		return (*this);
	this->type = obj.type;
	delete this->_brain;
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

const Brain *Dog::getBrain() const
{
	return (this->_brain);
}
