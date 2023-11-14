/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 22:02:35 by jklein            #+#    #+#             */
/*   Updated: 2023/05/08 22:02:39 by jklein           ###   ########.fr       */
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

Animal &Animal::operator=(const Animal &other)
{
	std::cout << "ANIMAL - Constructor Built - OVERLOAD" << std::endl;
    if ((this->type == "Cat" || this->type == "Dog") && (other.type == "Cat" || other.type == "Dog"))
        *Get_Brain() = *other.Get_Brain();
    this->type = other.type;
	return *this;
}

void	Animal::MakeSound(void) const
{
	std::cout << " - SOUND" << std::endl;
}

std::string	Animal::GetType(void) const
{
	return (this->type);
}

Brain	*Animal::Get_Brain(void) const
{
	return (NULL);
}
