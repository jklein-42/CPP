/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 21:53:31 by jklein            #+#    #+#             */
/*   Updated: 2023/05/08 21:53:35 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{	
	std::cout << std::endl;

	std::cout << "---- GEARBOX ----\n" << std::endl;

	ClapTrap	ClaptrapA("ClapTrapA");
	ClapTrap	ClaptrapB("ClapTrapB");

	std::cout << std::endl;

	std::cout << ClaptrapA << "\n" << ClaptrapB << std::endl;

	ClaptrapA.Attack("ClapTrapB");
	ClaptrapB.TakeDamage(ClaptrapA.GetAttackDamage());

	std::cout << std::endl;

	std::cout << ClaptrapA << "\n" << ClaptrapB << std::endl;

	ClaptrapB.BeRepaired(5);

	std::cout << std::endl;

	std::cout << ClaptrapA << "\n" << ClaptrapB << std::endl;
	return (0);
}

