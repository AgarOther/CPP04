/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:58:10 by scraeyme          #+#    #+#             */
/*   Updated: 2025/04/15 17:24:34 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal()
{
	std::cout << "A Cat spawned!" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &copy)
{
	*this = copy;
}

Cat &Cat::operator=(const Cat &obj)
{
	if (&obj == this)
		return (*this);
	this->type = obj.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "A Cat despawned!" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "*MeowMeow*" << std::endl;
}

const std::string &Cat::getType() const
{
	return (this->type);
}
