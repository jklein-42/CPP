/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:13:23 by jklein            #+#    #+#             */
/*   Updated: 2023/06/05 17:13:26 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>

using	std::string;
using	std::cout;
using	std::cin;
using	std::endl;

class Harl 
{
	public:
	Harl();
	void	complain(std::string level);

	private:
	struct _lut
	{
		string	level;
		void	(Harl::*f)(void);
	};
	struct _lut	lut[4];
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

};

#endif
