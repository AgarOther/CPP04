/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:27:35 by scraeyme          #+#    #+#             */
/*   Updated: 2025/01/09 13:35:02 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal unknown spawned!" << std::endl;
}

Animal::Animal(const Animal &copy)
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

Animal::Animal(const std::string &type)
{
	std::cout << "Animal " << type << " spawned!" << std::endl;
	this->_type = type;
}

Animal::~Animal()
{
	std::cout << "Animal " << this->_type << " destroyed!" << std::endl;
}

void Animal::makeSound()
{
	if (this->_type == "Dog")
		std::cout << "BARK BARK!" << std::endl;
	else if (this->_type == "Cat")
		std::cout << "MEOW MEOW!" << std::endl;
	else
		std::cout << "*Unknown sound*" << std::endl;
}
