/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:01:35 by jklein            #+#    #+#             */
/*   Updated: 2023/06/05 17:01:40 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zom;

	zom = (Zombie *)malloc(sizeof(Zombie) * N);
	for (int i = 0; i < N; i++)
		zom[i].setname(name);
	return (zom);
}
