/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 21:48:27 by jklein            #+#    #+#             */
/*   Updated: 2023/05/08 21:48:36 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed
{
	private:
		int					_RawBits;
		static const int	_Bits = 8;
	
	public:
		Fixed();
		Fixed(const Fixed &f);
		~Fixed();
		Fixed	&operator=(const Fixed &f2);

		int		GetRawBits( void ) const;
		void	SetRawBits( int const raw );
};

#endif
