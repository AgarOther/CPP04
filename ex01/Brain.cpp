/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 17:42:35 by scraeyme          #+#    #+#             */
/*   Updated: 2025/04/15 18:01:49 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "A Brain spawned!" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "tikawahukwa";
}

Brain::Brain(const Brain &copy)
{
	*this = copy;
}

Brain &Brain::operator=(const Brain &obj)
{
	if (&obj == this)
		return (*this);
	for (int i = 0; i < 100; i++)
		this->ideas[i] = obj.ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "A Brain despawned!" << std::endl;
}

const std::string *Brain::getIdeas() const
{
	return (this->ideas);
}

const std::string &Brain::getIdeas(int i) const
{
	return (this->ideas[i]);
}
