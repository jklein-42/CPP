/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 17:43:06 by jklein            #+#    #+#             */
/*   Updated: 2023/06/20 17:43:14 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :	_Name(""),
						_Hitpoints(10),
						_EnergyPoints(10),
						_AttackDamage(0)
{
	std::cout << "Default CLAPTRAP GearBox Loaded" << std::endl;
}

ClapTrap::ClapTrap(std::string Name) :  _Name(Name),
										_Hitpoints(10),
										_EnergyPoints(10),
										_AttackDamage(0)
{
	std::cout << "CLAPTRAP GearBox Loaded" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &clapTrap)
{
	std::cout << "CLAPTRAP --copy-- GearBox Loaded" << std::endl;
	*this = clapTrap;
}

ClapTrap::~ClapTrap()
{
	std::cout << "CLAPTRAP Destroyed" << std::endl;
}

std::string	&ClapTrap::GetName()
{
	return (_Name);
}

void		ClapTrap::SetName(std::string &Name)
{
	_Name = Name;
}

int			&ClapTrap::GetHitpoints()
{
	return (_Hitpoints);
}

void		ClapTrap::SetHitpoints(int Hitpoints)
{
	_Hitpoints = Hitpoints;
}

int			&ClapTrap::GetEnergyPoints()
{
	return (_EnergyPoints);
}

void		ClapTrap::SetEnergyPoints(int EnergyPoints)
{
	_EnergyPoints = EnergyPoints;
}

int			&ClapTrap::GetAttackDamage()
{
	return (_AttackDamage);
}

void		ClapTrap::SetAttackDamage(int AttackDamage)
{
	_AttackDamage = AttackDamage;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &clapTrap)
{
	if (this != &clapTrap)
	{
		std::cout << "CLAPTRAP GearBox Operator Loaded" << std::endl;
		this->_Name = clapTrap._Name;
		this->_Hitpoints = clapTrap._Hitpoints;
		this->_EnergyPoints = clapTrap._EnergyPoints;
		this->_AttackDamage = clapTrap._AttackDamage;
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream &stream, ClapTrap &clapTrap)
{
	stream << "GearBox: " << clapTrap.GetName() << \
	" Hitpoints: " << clapTrap.GetHitpoints() << \
	" Energy Points: " << clapTrap.GetEnergyPoints() << \
	" Attack Damage: " << clapTrap.GetAttackDamage();
	return (stream);
}

void	ClapTrap::Attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->GetName() << " Has Attacked " << target << ", " \
	<< "Causing " << this->GetAttackDamage() << " points of damage!" << std::endl;
}

void	ClapTrap::TakeDamage(unsigned int amount)
{
	this->_EnergyPoints -= amount;
	std::cout << this->GetName() << " Has Lost " \
	<< amount << " Healthpoints.. " << std::endl;
}

void	ClapTrap::BeRepaired(unsigned int amount)
{
	this->_EnergyPoints += amount;
	std::cout << this->GetName() << " Has Recovered " \
	<< amount << " Healthpoints. " << std::endl;
}
