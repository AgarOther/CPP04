/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:58:00 by scraeyme          #+#    #+#             */
/*   Updated: 2025/04/15 17:37:58 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "colors.hpp"
#include <iostream>

int main()
{
	std::cout << GREEN << "--- Polymorphism ---" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << RED << std::endl << "--- Wrong Polymorphism ---" << std::endl;
	const WrongAnimal* meta2 = new WrongAnimal();
	const Animal* l = new Dog();
	const WrongAnimal* k = new WrongCat();
	std::cout << l->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	k->makeSound(); //will output the wronganimal sound!
	l->makeSound();
	meta2->makeSound();

	delete meta2;
	delete l;
	delete k;

	std::cout << RESET;
	return 0;
}
