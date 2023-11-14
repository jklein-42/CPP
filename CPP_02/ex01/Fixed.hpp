/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 21:49:58 by jklein            #+#    #+#             */
/*   Updated: 2023/05/08 21:50:00 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
	private:
		int					_RawBits;
		static const int	_Bits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &f);
		Fixed	&operator=(const Fixed &f2);

		int		GetRawBits(void) const;
		void	SetRawBits(int const raw);

		Fixed(const int integer);
		Fixed(const float floating_point);

		float	ToFloat( void ) const;
		int		ToInt( void ) const;
};

std::ostream	&operator<<(std::ostream &stream, Fixed const &f);

#endif
