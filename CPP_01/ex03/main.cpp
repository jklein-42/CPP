/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:11:37 by jklein            #+#    #+#             */
/*   Updated: 2023/06/05 17:11:45 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{

	{
		std::cout << std::endl;

		Weapon club = Weapon("Blades With Spikes");
		HumanA Max("Max's",club);
		Max.attack();
		club.setType("Hocky Stick");
		Max.attack();

	}
	{
		std::cout << std::endl;

		Weapon club = Weapon("Swords With Blades");
		HumanB Diablo("Diablo's");
		Diablo.setWeapon(club);
		Diablo.attack();
		club.setType("Bat With Nails \n");
		Diablo.attack();
	}
}
