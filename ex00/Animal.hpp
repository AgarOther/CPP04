/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:25:55 by scraeyme          #+#    #+#             */
/*   Updated: 2025/01/09 13:33:44 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>
# include <iostream>

class Animal
{
	protected:
		std::string	_type;
	public:
		Animal();
		Animal(const Animal &copy);
		Animal &operator=(Animal const &obj);
		~Animal();

		void makeSound();
};

#endif