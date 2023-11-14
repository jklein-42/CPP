/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 22:08:53 by jklein            #+#    #+#             */
/*   Updated: 2023/05/08 22:08:55 by jklein           ###   ########.fr       */
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

Animal::Animal(Animal const &other)
{
	std::cout << "ANIMAL - Constructor Built - COPY" << std::endl;
	*this = other;
	return;
}

Animal &Animal::operator=(Animal const &other)
{
	std::cout << "ANIMAL - Constructor Built - OVERLOAD" << std::endl;
	this->type = other.GetType();
	*(this->Get_Brain()) = *(other.Get_Brain());
	return *this;
}

std::string	Animal::GetType(void) const
{
	return (this->type);
}

Brain *Animal::Get_Brain(void) const
{
	return (NULL);
}
