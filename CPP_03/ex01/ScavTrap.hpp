/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 21:55:10 by jklein            #+#    #+#             */
/*   Updated: 2023/05/08 21:55:14 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class	ScavTrap: public ClapTrap
{
	public:

		ScavTrap();
		ScavTrap(const std::string	&Name);
		ScavTrap(ScavTrap &scavTrap);
		~ScavTrap();
		ScavTrap	&operator=(ScavTrap &clapTrap);

		void	Attack(std::string const & target);
		void	GuardGate(void);
};

#endif
