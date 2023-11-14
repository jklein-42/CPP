/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 21:54:34 by jklein            #+#    #+#             */
/*   Updated: 2023/05/08 21:54:37 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class	ClapTrap
{
	protected:

		std::string	_Name;
		int			_Hitpoints;
		int			_EnergyPoints;
		int			_AttackDamage;
	
	public:

		ClapTrap();
		ClapTrap(std::string Name);
		ClapTrap(ClapTrap &clapTrap);
		~ClapTrap();
		ClapTrap			&operator=(ClapTrap const &clapTrap2);

		std::string			&GetName();
		void				SetName(std::string &Name);
		int					&GetHitpoints();
		void				SetHitpoints(int Hitpoints);
		int					&GetEnergyPoints();
		void				SetEnergyPoints(int EnergyPoints);
		int					&GetAttackDamage();
		void				SetAttackDamage(int AttackDamage);

		virtual void		Attack(std::string const & target);
		void				TakeDamage(unsigned int amount);
		void				BeRepaired(unsigned int amount);
};

std::ostream	&operator<<(std::ostream &stream, ClapTrap &clapTrap);

#endif
