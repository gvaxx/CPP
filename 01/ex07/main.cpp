/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 23:56:14 by mcaptain          #+#    #+#             */
/*   Updated: 2021/01/04 14:04:34 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char const *argv[])
{
	if (argc == 4)
	{
		std::string	s1 = argv[2];
		std::string	s2 = argv[3];

		if(!s1.length() || !s2.length())
		{
			std::cerr << "replace and search strings should not be empty\n";
			return 1;
		}

		std::string	fileName = argv[1];
		std::ifstream	in(argv[1]);
		if (!in || in.fail())
		{
			std::cerr << "Could not open " << argv[1] << "\n";
			return 1;
		}

		std::string	replaceFile = fileName + ".replace";
		std::ofstream	out(replaceFile);
		if (!out || out.fail())
		{
			std::cerr << "Could not open " << replaceFile << "\n";
			return 1;
		}

		size_t		pos;
		std::string	buffer;

		size_t len = s1.length();
		while (std::getline(in, buffer))
		{
			while ((pos = buffer.find(s1)) != std::string::npos)
				buffer.replace(pos, len, s2);
			out << buffer << '\n';
		}
		in.close();
		out.close();
	}
	else
	{
		std::cout << "you should enter: \n./replace file_name search_string replace_string\n";
	}
	return 0;
}