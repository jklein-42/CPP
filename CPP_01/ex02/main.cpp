/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:07:42 by jklein            #+#    #+#             */
/*   Updated: 2023/06/05 17:07:45 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdio.h>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << std::endl;

    std::cout << "String Location : " << (void*)&str[0] << std::endl;
    std::cout << "StringPTR : " << stringPTR << std::endl;
    std::cout << "StringREF : " << &stringREF << std::endl;

    std::cout << std::endl;

    std::cout << "Data - stringPTR : " << *stringPTR << std::endl;
    std::cout << "Data - stringREF : " << stringREF << std::endl;

    std::cout << std::endl;

}
