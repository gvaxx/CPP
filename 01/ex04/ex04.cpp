//
// Created by Morrec Captain on 1/2/21.
//

# include <string>
# include <iostream>

int	main(void) {
    std::string string = "HI THIS IS BRAIN";
    std::string *string_ptr = &string;
    std::string &string_ref = string;
    std::cout << string << std::endl ;
    std::cout << *string_ptr << std::endl ;
    std::cout << string_ref << std::endl ;

    return 0;
}
