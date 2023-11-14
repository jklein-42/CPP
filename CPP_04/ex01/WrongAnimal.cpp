/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 22:05:43 by jklein            #+#    #+#             */
/*   Updated: 2023/05/08 22:05:46 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("WrongAnimal")
{
	std::cout << "ANIMAL - Constructor Built - WRONG ANIMAL" << std::endl;
	return;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "ANIMAL - Destructor - WRONG ANIMAL" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(WrongAnimal const &other)
{
	std::cout << "ANIMAL - Constructor Built - WRONG ANIMAL - COPY" << std::endl;
	*this = other;
	return;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &other)
{
	std::cout << "ANIMAL - Constructor Built - WRONG ANIMAL - OVERLOAD" << std::endl;
	this->type = other.GetType();
	return *this;
}

void	WrongAnimal::MakeSound(void) const
{
	std::cout << " - SOUND" << std::endl;
}

std::string	WrongAnimal::GetType(void) const
{
	return (this->type);
}
