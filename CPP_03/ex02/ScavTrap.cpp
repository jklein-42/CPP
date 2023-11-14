/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 17:44:44 by jklein            #+#    #+#             */
/*   Updated: 2023/06/20 17:44:46 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &Name) : ClapTrap(Name)
{
	std::cout << "SCAVTRAP GearBox Loaded" << std::endl;
	SetHitpoints(100);
	SetEnergyPoints(50);
	SetAttackDamage(20);
}

ScavTrap::ScavTrap(ScavTrap &scavTrap)
{
	std::cout << "SCAVTRAP --copy--" << std::endl;
	*this = scavTrap;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SCAVTRAP Destroyed" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap &scavTrap)
{
	if (this != &scavTrap)
	{
		std::cout << "SCAVTRAP GearBox Operator Loaded" << std::endl;
		this->SetName(scavTrap.GetName());
		this->SetHitpoints(scavTrap.GetHitpoints());
		this->SetEnergyPoints(scavTrap.GetEnergyPoints());
		this->SetAttackDamage(scavTrap.GetAttackDamage());
	}
	return (*this);
}

void	ScavTrap::Attack(std::string const & target)
{
	std::cout << "ScavTrap " << this->GetName() << " Has Attacked " << target << ", " \
	<< "Causing " << this->GetAttackDamage() << " Points of Damage!" << std::endl;
}

void	ScavTrap::GuardGate()
{
	std::cout << "ScavTrap is Gate Keeper of GEARBOX." << std::endl;
}
