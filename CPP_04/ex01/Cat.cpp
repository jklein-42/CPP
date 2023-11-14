/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 22:04:26 by jklein            #+#    #+#             */
/*   Updated: 2023/05/08 22:04:28 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "ANIMAL - Constructor Built - CAT NEW BRAIN" << std::endl;
	return;
}

Cat::~Cat(void)
{
	std::cout << "ANIMAL - Destructor - CAT DELETE BRAIN" << std::endl;
	delete this->brain;
	return;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "ANIMAL - Constructor Built - CAT NEW BRAIN - COPY" << std::endl;
	this->brain = new Brain();
	*this = other;
	return;
}

Cat	&Cat::operator=(const Cat &other)
{
	std::cout << "ANIMAL - Constructor Built - CAT NEW BRAIN - OVERLOAD" << std::endl;
	this->type = other.type;
	*(this->brain) = *(other.brain);
	return (*this);
}

void	Cat::MakeSound(void) const
{
	std::cout << "MEOW" << std::endl;
}

Brain	*Cat::Get_Brain() const
{
	return (this->brain);
}
