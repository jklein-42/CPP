/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:32:14 by jklein            #+#    #+#             */
/*   Updated: 2023/06/20 14:32:32 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _RawBits(0)
{
	std::cout << "Constructor Called - Constructor" << std::endl;
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy Constructor - Copy of Constructor" << std::endl;
	*this = f;
}

Fixed	&Fixed::operator=(const Fixed &f2)
{
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
	this->SetRawBits(integer << Fixed::_Bits);
}

Fixed::Fixed(const float floating_point)
{
	std::cout << std::endl;

	std::cout << "Constructor - Float" << std::endl;
	this->SetRawBits(std::roundf(floating_point * (1 << Fixed::_Bits)));
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

bool	Fixed::operator>(Fixed const &f) const
{
	if (this->_RawBits > f.GetRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<(Fixed const &f) const
{
	if (this->_RawBits < f.GetRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed const &f) const
{
	if (this->_RawBits >= f.GetRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed const &f) const
{
	if (this->_RawBits <= f.GetRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator==(Fixed const &f) const
{
	if (this->_RawBits == f.GetRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=(Fixed const &f) const
{
	if (this->_RawBits != f.GetRawBits())
		return (true);
	return (false);
}

Fixed	Fixed::operator+(Fixed const &f)
{
	this->_RawBits += f.GetRawBits();
	return (*this);
}

Fixed	Fixed::operator-(Fixed const &f)
{
	this->_RawBits -= f.GetRawBits();
	return (*this);
}

Fixed	Fixed::operator*(Fixed const &f)
{
	this->_RawBits = (this->ToFloat() * f.ToFloat()) * (1 << _Bits);
	return (*this);
}

Fixed	Fixed::operator/(Fixed const &f)
{
	this->_RawBits = (this->ToFloat() / f.ToFloat()) * (1 << _Bits);
	return (*this);
}

Fixed	Fixed::operator++()
{
	this->_RawBits++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp(*this);
	++(*this);
	return (temp);
}

Fixed	Fixed::operator--()
{
	this->_RawBits--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp(*this);
	--(*this);
	return (temp);
}

Fixed const	&Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.GetRawBits() > b.GetRawBits())
		return (b);
	return (a);
}

Fixed const	&Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.GetRawBits() < b.GetRawBits())
		return (b);
	return (a);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a.GetRawBits() > b.GetRawBits())
		return (b);
	return (a);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a.GetRawBits() < b.GetRawBits())
		return (b);
	return (a);
}
