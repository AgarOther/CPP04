/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:58:10 by scraeyme          #+#    #+#             */
/*   Updated: 2025/04/16 13:24:29 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : AAnimal()
{
	std::cout << "A Cat spawned!" << std::endl;
	this->type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat &copy) : AAnimal()
{
	this->type = copy.type;
	this->_brain = new Brain(*copy.getBrain());
}

Cat &Cat::operator=(const Cat &obj)
{
	if (&obj == this)
		return (*this);
	this->type = obj.type;
	delete this->_brain;
	this->_brain = new Brain(*obj.getBrain());
	return (*this);
}

Cat::~Cat()
{
	std::cout << "A Cat despawned!" << std::endl;
	delete this->_brain;
}

void Cat::makeSound() const
{
	std::cout << "*MeowMeow*" << std::endl;
}

const Brain *Cat::getBrain() const
{
	return (this->_brain);
}
