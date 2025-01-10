/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 14:08:02 by scraeyme          #+#    #+#             */
/*   Updated: 2025/01/09 14:40:42 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor called!" << std::endl;
	this->_type = "Animal";
}

Animal::Animal(Animal const &copy)
{
	*this = copy;
}

Animal &Animal::operator=(Animal const &obj)
{
	if (this == &obj)
		return (*this);
	this->_type = obj._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called!" << std::endl;
}

std::string Animal::getType() const
{
	return (this->_type);
}

void Animal::makeSound() const
{
	if (this->_type == "Cat")
		std::cout << "MEOW!" << std::endl;
	else if (this->_type == "Dog")
		std::cout << "Can I pet dat dawg?" << std::endl;
	else
		std::cout << "Wtf is this animal bro" << std::endl;
}
