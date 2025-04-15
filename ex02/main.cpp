/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:58:00 by scraeyme          #+#    #+#             */
/*   Updated: 2025/04/16 01:10:44 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "colors.hpp"
#include <iostream>

int main()
{
	const Dog *j = new Dog();
	const Cat *i = new Cat();

	Dog dog;
	{
		Dog woof = dog;
	}
	Dog *megawoof(&dog);

	Cat cat;
	{
		Cat meow = cat;
	}
	Cat *megameow = new Cat(cat);

	std::cout << j->getBrain()->getIdeas(1) << std::endl;
	std::cout << megawoof->getBrain()->getIdeas(1) << std::endl;

	std::cout << i->getBrain()->getIdeas(1) << std::endl;
	std::cout << megameow->getBrain()->getIdeas(1) << std::endl;

	megawoof->makeSound();
	megameow->makeSound();

	delete j;
	delete i;
	delete megameow;

	return 0;
}
