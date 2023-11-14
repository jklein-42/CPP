/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 21:50:12 by jklein            #+#    #+#             */
/*   Updated: 2023/05/08 21:50:13 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	a = Fixed( 1234.4321f );

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.ToInt() << " as Int" << std::endl;
	std::cout << "b is " << b.ToInt() << " as Int" << std::endl;
	std::cout << "c is " << c.ToInt() << " as Int" << std::endl;
	std::cout << "d is " << d.ToInt() << " as Int" << std::endl;

	return 0;
}
