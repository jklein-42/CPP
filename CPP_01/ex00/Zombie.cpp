/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 16:58:45 by jklein            #+#    #+#             */
/*   Updated: 2023/06/05 16:58:56 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    this->_name = "unnamed";
}

Zombie::Zombie(std::string name)
{
    this->set_name(name);
}

Zombie::~Zombie(void)
{
    std::cout << this->_name << " Gharrrgl..." << std::endl;
}

void Zombie::set_name(std::string name)
{
    this->_name = name;
}

void Zombie::announce(void)
{
    std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl; 
}
