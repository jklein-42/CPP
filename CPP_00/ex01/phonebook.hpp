/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 21:34:58 by jklein            #+#    #+#             */
/*   Updated: 2023/05/08 21:35:04 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
	public:
	std::string		Name;
	std::string		LastName;
	std::string		NickName;
	std::string		Secret;
	std::string		Phone;

	void	display(void)
	{
		std::cout << Name;
		std::cout << " : ";
		std::cout << Phone << std::endl;
	}
};

class PhoneBook
{
	public:
	Contact Cons[8];
	int		num;
};

#endif
