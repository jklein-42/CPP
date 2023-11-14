/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:12:55 by jklein            #+#    #+#             */
/*   Updated: 2023/06/05 17:13:01 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() 
{
	lut[0].level = "DEBUG";
	lut[0].f = &Harl::debug;
	lut[1].level = "INFO";
	lut[1].f = &Harl::info;
	lut[2].level = "WARNING";
	lut[2].f = &Harl::warning;
	lut[3].level = "ERROR";
	lut[3].f = &Harl::error;
}

void	Harl::debug(void) 
{
	cout << "[DEBUG] Fox's jump fences and thats how they get away from the kioti \n";
}

void	Harl::info(void) 
{
	cout << "[INFO] The Fox jumped the feace, the Fox then jumped another fence, the Fox then jumped one more fence before it got away\n";
}

void	Harl::warning(void) 
{
	cout << "[WARNING] The Kioti could get the Fox and the hunter could get the Fox, if the Fox dies it still jumps the next fence \n";
}

void	Harl::error(void) 
{
	cout << "[ERROR] There is no error with the Fox jumping the fence \n";
}

void	Harl::complain( std::string level ) 
{
	static int i = -1;
	if (i <= 3)
		level == lut[++i].level ? (this->*lut[i].f)() : complain(level) ;
	i = -1;
}
