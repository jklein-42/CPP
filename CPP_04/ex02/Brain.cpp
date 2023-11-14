/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 22:09:24 by jklein            #+#    #+#             */
/*   Updated: 2023/05/08 22:09:30 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() : ideas()
{
	std::cout << "ANIMAL - Constructor Built - BRAIN" << std::endl;
}

Brain::~Brain()
{
	std::cout << "ANIMAL - Destructor - BRAIN" << std::endl;
}

Brain::Brain(const Brain &other)
{
	*this = other;
	std::cout << "ANIMAL - Constructor Built - COPY" << std::endl;
}

Brain	&Brain::operator=(const Brain &other)
{
	for (unsigned i = 0; i < 100; ++i)
		this->ideas[i] = other.ideas[i];
	return *this;
}
