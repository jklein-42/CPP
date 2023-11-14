/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 21:48:49 by jklein            #+#    #+#             */
/*   Updated: 2023/05/08 21:48:52 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
	Fixed a;
	Fixed b(a);
	Fixed c;

	c = b;

	std::cout << a.GetRawBits() << std::endl;
	std::cout << b.GetRawBits() << std::endl;
	std::cout << c.GetRawBits() << std::endl;

	return 0;
}
