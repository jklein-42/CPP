/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 22:09:49 by jklein            #+#    #+#             */
/*   Updated: 2023/05/08 22:09:52 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Brain
{
	public :

	Brain();
	~Brain();
	Brain(const Brain &other);
	Brain &operator=(const Brain &oterh);

	std::string	ideas[100];
};
