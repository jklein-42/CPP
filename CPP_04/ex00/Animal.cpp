/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 21:56:30 by jklein            #+#    #+#             */
/*   Updated: 2023/05/08 21:56:32 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("Animal")
{

	std::cout << "ANIMAL - Constructor Built" << std::endl;
	return;
}

Animal::~Animal(void)
{
	std::cout << "ANIMAL - Destructor" << std::endl;
	return;
}

Animal::Animal(Animal const &other) : type(other.type)
{
	std::cout << "ANIMAL - COPY Constructor Built" << std::endl;
	return;
}

Animal &Animal::operator=(Animal const &other)
{
	std::cout << "ANIMAL - Operator" << std::endl;
	type = other.type;
	return *this;
}

void	Animal::MakeSound(void) const
{
	std::cout << " - SOUND" << std::endl;
}

std::string	Animal::GetType(void) const
{
	return (type);
}
