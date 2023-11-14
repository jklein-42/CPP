/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 22:06:23 by jklein            #+#    #+#             */
/*   Updated: 2023/05/08 22:06:28 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "WrongCat";
	std::cout << "ANIMAL - Constructor Built - WRONG CAT" << std::endl;
	return;
}

WrongCat::~WrongCat(void)
{
	std::cout << "ANIMAL - Destructor - WRONG CAT" << std::endl;
	return;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	std::cout << "ANIMAL - Constructor Built - COPY" << std::endl;
	*this = other;
	return;
}

WrongCat	&WrongCat::operator=(const WrongCat &other)
{
	std::cout << "ANIMAL - Constructor Built - WRONG CAT - OVERLOAD" << std::endl;
	this->type = other.GetType();
	return (*this);
}

void	WrongCat::MakeSound(void) const
{
	std::cout << "WOOF" << std::endl;
}
