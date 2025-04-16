/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:58:00 by scraeyme          #+#    #+#             */
/*   Updated: 2025/04/16 13:34:55 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "colors.hpp"
#include <iostream>

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	Dog dog;
	{
		Dog woof = dog;
	}
	Animal *megawoof(&dog);

	Cat cat;
	{
		Cat meow = cat;
	}
	Animal *megameow = new Cat(cat);

	std::cout << j->getBrain()->getIdeas(1) << std::endl;
	std::cout << megawoof->getBrain()->getIdeas(1) << std::endl;

	std::cout << i->getBrain()->getIdeas(1) << std::endl;
	std::cout << megameow->getBrain()->getIdeas(1) << std::endl;

	megawoof->makeSound();
	megameow->makeSound();

	std::cout << std::endl << "----- Animal Array -----" << std::endl;

	Animal	*animals[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	delete j;
	delete i;
	delete megameow;
	for (int i = 0; i < 10; i++)
		delete animals[i];

	return 0;
}
