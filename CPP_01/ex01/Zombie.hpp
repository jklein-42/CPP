/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:02:00 by jklein            #+#    #+#             */
/*   Updated: 2023/06/05 17:02:03 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <stdio.h>
#include <string>

class Zombie 
{
	private:

	std::string name;

	public:

	void announce( void )
	{
		std::cout << this->name;
		std::cout << ": A Horde Of Zombies !!!" << std::endl;
	};
	void setname(std::string name)
	{
		if (!name.empty())
			this->name = name;
	};
	void distroyz(void)
	{
		std::cout << "Killing Zombies !";
		std::cout << this->name << std::endl;
	};
};

Zombie* zombieHorde( int N, std::string name );

# endif
