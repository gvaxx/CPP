/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 21:31:51 by mcaptain          #+#    #+#             */
/*   Updated: 2021/01/03 21:32:11 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>

int	main(void) {
    std::string string = "HI THIS IS BRAIN";
    std::string *string_ptr = &string;
    std::string &string_ref = string;
    std::cout << string << std::endl;
    std::cout << *string_ptr << std::endl;
    std::cout << string_ref << std::endl;

    return 0;
}
