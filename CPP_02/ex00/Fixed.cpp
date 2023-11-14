/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 21:48:05 by jklein            #+#    #+#             */
/*   Updated: 2023/05/08 21:48:09 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _RawBits(0)
{
	std::cout << std::endl;

	std::cout << "Constructor Called - Constructor" << std::endl;
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << std::endl;

	std::cout << "Copy Constructor - Copy of Constructor" << std::endl;
	this->SetRawBits(f.GetRawBits());
}

Fixed::~Fixed()
{
	std::cout << "Destructor of Function - Destructor \n" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &f2)
{
	std::cout << std::endl;

	std::cout << "Constructor Assignment Operator - Copy Operator" << std::endl;
	this->SetRawBits(f2.GetRawBits());
	return (*this);
}

int	Fixed::GetRawBits(void) const
{
	std::cout << std::endl;	

	std::cout << "GetRawBits Function Called - Function Member \n" << std::endl;
	return (_RawBits);
}

void	Fixed::SetRawBits(int const raw)
{
	this->_RawBits = raw;
}
