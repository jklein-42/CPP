/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:13:52 by jklein            #+#    #+#             */
/*   Updated: 2023/06/05 17:14:04 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl harl;

    std::cout << std::endl;

    harl.complain("INFO");

    std::cout << std::endl;

    harl.complain("DEBUG");

    std::cout << std::endl;

    harl.complain("ERROR");

    std::cout << std::endl;

    harl.complain("WARNING");

    std::cout << std::endl;

    return 0;
}
