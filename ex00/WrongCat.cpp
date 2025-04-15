/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:58:10 by scraeyme          #+#    #+#             */
/*   Updated: 2025/04/15 17:32:45 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "A WrongCat spawned!" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy)
{
	*this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
	if (&obj == this)
		return (*this);
	this->type = obj.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "A WrongCat despawned!" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "*WrongMeowWrongMeow*" << std::endl;
}

const std::string &WrongCat::getType() const
{
	return (this->type);
}
