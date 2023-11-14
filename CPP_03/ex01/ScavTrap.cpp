/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 21:54:53 by jklein            #+#    #+#             */
/*   Updated: 2023/05/08 21:54:56 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &Name) : ClapTrap(Name)
{
	std::cout << "SCAVTRAP GearBox Loaded" << std::endl;
	SetHitpoints(500);
	SetEnergyPoints(1000);
	SetAttackDamage(200);
}

ScavTrap::ScavTrap(ScavTrap &scavTrap)
{
	std::cout << "SCAVTRAP --copy-- GearBox Loaded" << std::endl;
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
	std::cout << "ScavTrap " << this->GetName() << " Has attacked " << target << ", " \
	<< "Causing " << this->GetAttackDamage() << " Points of Damage!" << std::endl;
}

void	ScavTrap::GuardGate()
{
	std::cout << "ScavTrap is Gate Keeper of GEARBOX." << std::endl;
}
