/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 17:44:09 by jklein            #+#    #+#             */
/*   Updated: 2023/06/20 17:44:13 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &Name) : ClapTrap(Name)
{
	std::cout << "FRAGTRAP GearBox Loaded" << std::endl;
	SetHitpoints(1000);
	SetEnergyPoints(10000);
	SetAttackDamage(3000);
}

FragTrap::FragTrap(FragTrap &fragTrap)
{
	std::cout << "FRAGTRAP --copy-- GearBox Loaded" << std::endl;
	*this = fragTrap;
}

FragTrap::~FragTrap()
{
	std::cout << "FRAGTRAP Destroyed" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap &fragTrap)
{
	if (this != &fragTrap)
	{
		std::cout << "FRAGTRAP GearBox Operator Loaded" << std::endl;
		this->SetName(fragTrap.GetName());
		this->SetHitpoints(fragTrap.GetHitpoints());
		this->SetEnergyPoints(fragTrap.GetEnergyPoints());
		this->SetAttackDamage(fragTrap.GetAttackDamage());
	}
	return (*this);
}

void	FragTrap::Attack(std::string const & target)
{
	std::cout << "FragTrap " << this->GetName() << " Has Attacked " << target << ", " \
	<< "Causing " << this->GetAttackDamage() << " Points of Damage!" << std::endl;
}

void	FragTrap::HighFivesGuys()
{
	std::cout << "HIGH FIVES GUYS!" << std::endl;
}
