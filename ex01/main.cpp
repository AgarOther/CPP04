/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:58:00 by scraeyme          #+#    #+#             */
/*   Updated: 2025/04/16 01:04:42 by scraeyme         ###   ########.fr       */
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
	Animal *megameow = new Dog(dog);

	std::cout << j->getBrain()->getIdeas(1) << std::endl;
	std::cout << megawoof->getBrain()->getIdeas(1) << std::endl;

	std::cout << i->getBrain()->getIdeas(1) << std::endl;
	std::cout << megameow->getBrain()->getIdeas(1) << std::endl;

	megawoof->makeSound();
	megameow->makeSound();

	//delete megawoof;
	delete j;
	delete i;
	delete megameow;

	return 0;
}
