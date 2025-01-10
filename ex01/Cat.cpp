/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 14:09:49 by scraeyme          #+#    #+#             */
/*   Updated: 2025/01/10 14:13:26 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor called!" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(Cat const &copy)
{
	*this = copy;
}

Cat &Cat::operator=(Cat const &obj)
{
	if (this == &obj)
		return (*this);
	this->_type = obj._type;
	delete this->_brain;
	this->_brain = new Brain(*obj._brain);
	return (*this);
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat destructor called!" << std::endl;
}
