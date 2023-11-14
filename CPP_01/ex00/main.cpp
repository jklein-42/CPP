/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:00:17 by jklein            #+#    #+#             */
/*   Updated: 2023/06/05 17:00:20 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) 
{
	Zombie	*heap;

	std::cout << std::endl;

	heap = newZombie("Blood - ");
	heap->announce();
	randomChump("Saw - ");
	delete heap;

	std::cout << std::endl;

	return 0;
}
