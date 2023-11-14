/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 21:58:23 by jklein            #+#    #+#             */
/*   Updated: 2023/05/08 21:58:32 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	std::cout << "ANIMAL - Constructor Built - DOG" << std::endl;
	return;
}

Dog::~Dog(void)
{
	std::cout << "ANIMAL - Destructor - DOG" << std::endl;
	return;
}

Dog::Dog(Dog const &other) : Animal(other)
{
	std::cout << "ANIMAL - COPY Constructor Built - DOG" << std::endl;
	*this = other;
	return;
}

Dog	&Dog::operator=(const Dog &other)
{
	std::cout << "ANIMAL - Operator - DOG" << std::endl;
	this->type = other.GetType();
	return (*this);
}

void	Dog::MakeSound(void) const
{
	std::cout << " - Woof" << std::endl;
}
