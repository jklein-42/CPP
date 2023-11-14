/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 21:59:47 by jklein            #+#    #+#             */
/*   Updated: 2023/05/08 21:59:49 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("WrongAnimal - SOUND")
{
	std::cout << "ANIMAL - Constructor Built - WRONG-ANIMAL SOUND" << std::endl;
	return;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "ANIMAL - Destructor - WRONG-ANIMAL SOUND" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(WrongAnimal const &other)
{
	std::cout << "ANIMAL - COPY Constructor Built - WRONG-ANIMAL SOUND" << std::endl;
	*this = other;
	return;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &other)
{
	std::cout << "ANIMAL - Operator - WRONG-ANIMAL SOUND" << std::endl;
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
