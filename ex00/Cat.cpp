/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:31:40 by scraeyme          #+#    #+#             */
/*   Updated: 2025/01/09 13:31:58 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Cat::Cat()
{
	std::cout << "Cat unknown spawned!" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	*this = copy;
}

Cat &Cat::operator=(Cat const &obj)
{
	if (this == &obj)
		return (*this);
	this->_type = obj._type;
	return (*this);
}

Cat::Cat(const std::string &type)
{
	std::cout << "Cat " << type << " spawned!" << std::endl;
	this->_type = type;
}

Cat::~Cat()
{
	std::cout << "Cat " << this->_type << " destroyed!" << std::endl;
}