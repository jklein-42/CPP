/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 21:57:28 by jklein            #+#    #+#             */
/*   Updated: 2023/05/08 21:57:37 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	std::cout << "ANIMAL - Constructor Built - CAT" << std::endl;
	return;
}

Cat::~Cat(void)
{
	std::cout << "ANIMAL - Destroctor - CAT" << std::endl;
	return;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "ANIMAL - Constructor Built - CAT" << std::endl;
	*this = other;
	return;
}

Cat	&Cat::operator=(const Cat &other)
{
	std::cout << "ANIMAL - Operator - CAT" << std::endl;
	this->type = other.GetType();
	return (*this);
}

void	Cat::MakeSound(void) const
{
	std::cout << " - Meow " << std::endl;
}
