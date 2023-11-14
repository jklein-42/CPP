/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 22:05:00 by jklein            #+#    #+#             */
/*   Updated: 2023/05/08 22:05:04 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "ANIMAL - Constructor Built - DOG NEW BRAIN" << std::endl;
	return;
}

Dog::~Dog(void)
{
	std::cout << "ANIMAL - Destructor - DOG DELETE BRAIN" << std::endl;
	delete this->brain;
	return;
}

Dog::Dog(Dog const &other) : Animal(other)
{
	std::cout << "ANIMAL - Constructor Built - DOG NEW BRAIN - COPY" << std::endl;
	this->brain = new Brain();
	*this = other;
	return;
}

Dog	&Dog::operator=(const Dog &other)
{
	std::cout << "ANIMAL - Constructor Built - DOG NEW BRAIN - OVERLOAD" << std::endl;
	this->type = other.type;
	*(this->brain) = *(other.brain);
	return (*this);
}

void	Dog::MakeSound(void) const
{
	std::cout << "WOOF" << std::endl;
}

Brain	*Dog::Get_Brain(void) const
{
	return (this->brain);
}
