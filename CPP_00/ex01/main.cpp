/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 21:34:23 by jklein            #+#    #+#             */
/*   Updated: 2023/05/08 21:34:32 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "iostream"
#include <string>

void	putst(std::string temp)
{
	std::cout << " | ";
	if (temp.size() > 10)
	{
		temp.resize(9);
		std::cout << temp;
		std::cout << ".";
	}
	else
		std::cout << temp;
}

int	main(void)
{
	PhoneBook PB;
	std::string	command;
	int	selector;
	PB.num = 0;

	while (1)
	{
		system("clear");
		std::cout << "command - ADD 1, SEARCH 2, EXIT 3" << std::endl;
		std::cin >> command;
		
		if (command == "ADD" || command == "1")
		{
			system("clear");
			std::cout << "ADD New Contact"<< std::endl;
			
			for (int i = PB.num - 1; i >= 0; i--)
    				PB.Cons[i+1] = PB.Cons[i];
			std::cout << "first name of contact  -> last name -> nick name -> number -> darkest secret" << std::endl;
			std::cin >> PB.Cons[0].Name;
			while (PB.Cons[0].Name.size() < 10)
				PB.Cons[0].Name.append(" ");
			system("clear");

			std::cout << "last name number of -> nick name -> number -> darkest secret";
			std::cout << PB.Cons[0].Name << std::endl;
			std::cin >> PB.Cons[0].LastName;
			while (PB.Cons[0].LastName.size() < 10)
				PB.Cons[0].LastName.append(" ");
			system("clear");

			std::cout << "nick name number of -> number -> darkest secret";
			std::cout << PB.Cons[0].Name << std::endl;
			std::cin >> PB.Cons[0].NickName;
			while (PB.Cons[0].NickName.size() < 10)
				PB.Cons[0].NickName.append(" ");
			system("clear");

			std::cout << "phone number of -> darkest secret";
			std::cout << PB.Cons[0].Name << std::endl;
			std::cin >> PB.Cons[0].Phone;
			while (PB.Cons[0].Phone.size() < 10)
				PB.Cons[0].Phone.append(" ");
			system("clear");

			std::cout << "darkest secret of ";
			std::cout << PB.Cons[0].Name << std::endl;
			std::cin >> PB.Cons[0].Secret;
			while (PB.Cons[0].Secret.size() < 10)
				PB.Cons[0].Secret.append(" ");
			if (PB.num < 8)
				PB.num++;
		}

		else if (command == "SEARCH" || command == "2")
		{
			for (int i = 0; i < PB.num; i++)
			{
				std::string temp;
				std::cout << i + 1;
				putst(PB.Cons[i].Name);
				putst(PB.Cons[i].LastName);
				putst(PB.Cons[i].NickName);
				putst(PB.Cons[i].Phone);
				putst(PB.Cons[i].Secret);
				std::cout << " | " << std::endl;
			}

			std::cin >> selector;
			selector--;
			system("clear");

			if (selector < PB.num || selector < 0)
			{
				std::cout << PB.Cons[selector].Name << std::endl;
				std::cout << PB.Cons[selector].LastName << std::endl;
				std::cout << PB.Cons[selector].NickName << std::endl;
				std::cout << PB.Cons[selector].Phone << std::endl;
				std::cout << PB.Cons[selector].Secret << std::endl;
			}
			else
			{
				std::cout << "invalid" << std::endl;
				command = "1";
			}
			if (1)
			{
				std::cout << "EXIT" << std::endl;
				if (command == "BACK" || command == "1")
				std::cin >> command;
				break;
			}
		}
		else if (command == "EXIT"  || command == "3")
			break ;
		command = "N";
	}
}
