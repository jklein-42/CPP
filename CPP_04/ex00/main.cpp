/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 22:01:47 by jklein            #+#    #+#             */
/*   Updated: 2023/05/08 22:01:58 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
	std::cout << "\n---- ANIMALS ----\n" << std::endl;

	const Animal* meta = new Animal();
	const Animal* _Cat = new Cat();
	const Animal* _Dog = new Dog();

	std::cout << _Cat->GetType() << " " << std::endl;
	std::cout << _Dog->GetType() << " " << std::endl;
	_Cat->MakeSound();
	_Dog->MakeSound();
	meta->MakeSound();

	delete meta;
	delete _Cat;
	delete _Dog;

	const WrongAnimal* a = new WrongCat();
	std::cout << a->GetType() << " " << std::endl;
	a->MakeSound();
	WrongCat b;
	std::cout << b.GetType() << " " << std::endl;
	b.MakeSound();
	delete a;

	return (0);
}
