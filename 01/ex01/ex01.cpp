/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 20:51:50 by mcaptain          #+#    #+#             */
/*   Updated: 2021/01/03 20:51:58 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include <iostream>
# include <cctype>
# include <string>

void memoryLeak()
{
	std::string panther = "String panther";
	std::cout << panther << std::endl;
}

int main()
{
	memoryLeak();
}