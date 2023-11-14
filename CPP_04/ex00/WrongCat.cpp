/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 22:00:45 by jklein            #+#    #+#             */
/*   Updated: 2023/05/08 22:00:49 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "WrongCat - SOUND";
	std::cout << "ANIMAL - Constructor Built - WRONG-CAT SOUND" << std::endl;
	return;
}

WrongCat::~WrongCat(void)
{
	std::cout << "ANIMAL - Destructor - WRONG-CAT SOUND" << std::endl;
	return;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	std::cout << "ANIMAL - COPY Constructor Built - WRONG-CAT SOUND" << std::endl;
	*this = other;
	return;
}

WrongCat	&WrongCat::operator=(const WrongCat &other)
{
	std::cout << "ANIMAL - Operator - WRONG-CAT SOUND" << std::endl;
	this->type = other.GetType();
	return (*this);
}

void	WrongCat::MakeSound(void) const
{
	std::cout << " - Woof" << std::endl;
}
