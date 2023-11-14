/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 16:59:34 by jklein            #+#    #+#             */
/*   Updated: 2023/06/05 16:59:38 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    public:

    void    set_name(std::string name);

    void    announce(void);

    Zombie(void);
    Zombie(std::string name);
    ~Zombie(void);

    private:

    std::string _name;
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif
