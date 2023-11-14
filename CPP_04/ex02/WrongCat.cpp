/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 22:12:25 by jklein            #+#    #+#             */
/*   Updated: 2023/05/08 22:12:29 by jklein           ###   ########.fr       */
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

WrongCat::WrongCat(const WrongCat &other)
{
	std::cout << "ANIMAL - Constructor Built - WRONG CAT - COPY" << std::endl;
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
	std::cout << " - MEOW" << std::endl;
}
