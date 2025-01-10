/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 14:13:06 by scraeyme          #+#    #+#             */
/*   Updated: 2025/01/10 14:13:34 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called!" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(Dog const &copy)
{
	*this = copy;
}

Dog &Dog::operator=(Dog const &obj)
{
	if (this == &obj)
		return (*this);
	this->_type = obj._type;
	delete this->_brain;
	this->_brain = new Brain(*obj._brain);
	return (*this);
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog destructor called!" << std::endl;
}
