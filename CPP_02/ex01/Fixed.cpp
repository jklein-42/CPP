/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 21:49:17 by jklein            #+#    #+#             */
/*   Updated: 2023/05/08 21:49:37 by jklein           ###   ########.fr       */
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
	*this = f;
}

Fixed	&Fixed::operator=(const Fixed &f2)
{
	std::cout << std::endl;

	std::cout << "Constructor Assignment Operator - Copy Operator" << std::endl;
	this->SetRawBits(f2.GetRawBits());
	return (*this);
}

Fixed::~Fixed()
{


	std::cout << "Destructor of Function - Destructor \n" << std::endl;
}

int	Fixed::GetRawBits(void) const
{
	return (_RawBits);
}

void	Fixed::SetRawBits(int const raw)
{
	this->_RawBits = raw;
}

Fixed::Fixed(const int integer)
{
	std::cout << std::endl;

	std::cout << "Constructor - Int" << std::endl;
	this->_RawBits = (integer << Fixed::_Bits);
}

Fixed::Fixed(const float floating_point)
{
	std::cout << std::endl;

	std::cout << "Constructor - Float" << std::endl;
	this->_RawBits = std::roundf(floating_point * (1 << Fixed::_Bits));
}

float	Fixed::ToFloat(void) const
{
	return ((float)this->_RawBits / (float)(1 << Fixed::_Bits));
}

int		Fixed::ToInt(void) const
{
	return (this->_RawBits >> Fixed::_Bits);
}

std::ostream	&operator<<(std::ostream &stream, Fixed const &f)
{
	stream << f.ToFloat();
	return (stream);
}
