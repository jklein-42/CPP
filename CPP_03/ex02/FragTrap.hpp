/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 17:44:28 by jklein            #+#    #+#             */
/*   Updated: 2023/06/20 17:44:30 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class	FragTrap: public ClapTrap
{
	public:
	
		FragTrap();
		FragTrap(const std::string	&Name);
		FragTrap(FragTrap &fragTrap);
		~FragTrap();
		FragTrap	&operator=(FragTrap &fragTrap2);

		void	Attack(std::string const & target);
		void	HighFivesGuys(void);
};

#endif
