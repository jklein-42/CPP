/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 22:11:02 by jklein            #+#    #+#             */
/*   Updated: 2023/05/08 22:11:05 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "ANIMAL - Constructor Built - DOG SOUND" << std::endl;
	return;
}

Dog::~Dog(void)
{
	std::cout << "ANIMAL - Destructor - DOG SOUND" << std::endl;
	delete this->brain;
	return;
}

Dog::Dog(Dog const &other)
{
	std::cout << "ANIMAL - Constructor Built - DOG SOUND - COPY" << std::endl;
	this->brain = new Brain();
	*this = other;
	return;
}

Dog	&Dog::operator=(const Dog &other)
{
	std::cout << "ANIMAL - Constructor Built - DOG SOUND - OVERLOAD" << std::endl;
	this->type = other.type;
	*(this->brain) = *(other.brain);
	return (*this);
}

void	Dog::MakeSound(void) const
{
	std::cout << " - WOOF" << std::endl;
}

Brain	*Dog::Get_Brain(void) const
{
	return (this->brain);
}
