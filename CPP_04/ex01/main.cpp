/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 22:07:10 by jklein            #+#    #+#             */
/*   Updated: 2023/05/08 22:07:13 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main( void )
{
	std::cout << std::endl;
	std::cout << "---- ANIMALS ----" << std::endl;
	std::cout << std::endl;

	Animal *tab[4];
	Brain *cat_brain;
	Brain *dog_brain;
	Dog a;
	Dog b(a);

	std::cout << "----------------" << std::endl;
	std::cout << "----------------" << std::endl;

	for (int _Cat = 0; _Cat < 4; _Cat++)
	{
		if (_Cat < 2)
		{
			tab[_Cat] = new Dog();
			tab[_Cat]->MakeSound();
		}
		else
		{
			tab[_Cat] = new Cat();
			tab[_Cat]->MakeSound();
		}
	}

	dog_brain = tab[0]->Get_Brain();
	cat_brain = tab[2]->Get_Brain();

	cat_brain->ideas[0] = dog_brain->ideas[0] = "  Where's BROOKLYN at, on steep away from the DOG with a BRAIN  \n";
	cat_brain->ideas[1] = dog_brain->ideas[1] = "  CATs don't like to swim, NEW JERSEY and the STATUE of LIBERTY are islands  \n";
	cat_brain->ideas[2] = dog_brain->ideas[2] = "  If a Dog could visit the Empire State Building what floor would it go to ???  \n";
	cat_brain->ideas[3] = dog_brain->ideas[3] = "  QUEENS is one block away from the BRONX (HARLEM) cats and dogs  \n";
	cat_brain->ideas[4] = dog_brain->ideas[4] = "  CATs and DOGs are the ones with all the BRAINS  \n";

	std::cout << std::endl;

	std::cout << "-----------------------------------" << std::endl;

	std::cout << std::endl;

	std::cout << "|" << tab[0]->Get_Brain()->ideas[0] << "|" << std::endl;
	*(tab[1]) = *(tab[0]);
	std::cout << "|" << tab[1]->Get_Brain()->ideas[1] << "|" << std::endl;

	std::cout << std::endl;

	std::cout << "-----------------------------------" << std::endl;

	std::cout << std::endl;

	std::cout << "|" << tab[2]->Get_Brain()->ideas[2] << "|" << std::endl;
	*(tab[3]) = *(tab[2]);
	std::cout << "|" << tab[3]->Get_Brain()->ideas[3] << "|" << std::endl;

	std::cout << std::endl;

	std::cout << "-----------------------------------" << std::endl;

	std::cout << std::endl;

	delete tab[0];
	delete tab[1];
	delete tab[2];
	delete tab[3];

	std::cout << "===================================" << std::endl;
	const Animal* _Dog = new Dog();
	const Animal* _Cat = new Cat();

	std::cout << std::endl;

	delete _Dog;
	delete _Cat;
	
	return (0);
}