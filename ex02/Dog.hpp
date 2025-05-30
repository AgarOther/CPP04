/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:58:15 by scraeyme          #+#    #+#             */
/*   Updated: 2025/04/16 13:51:56 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"
 
class Dog : public AAnimal
{
	public:
		Dog();
		Dog(const Dog &copy);
		Dog &operator=(const Dog &obj);
		~Dog();

		void makeSound() const;
		const Brain *getBrain() const;
	private:
		Brain *_brain;
};
