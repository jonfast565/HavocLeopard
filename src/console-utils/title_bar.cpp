//
// Created by jfast on 2/2/2019.
//

#include "title_bar.hpp"

void hl::console_utils::title_bar::print(std::string& title_string) {
    std::cout << "--- HL " << title_string << " ---" << std::endl;
    std::cout << "Author: Jon Fast" << std::endl;
    std::cout << "Version: 1.0" << std::endl;
    std::cout << "--------------------" << std::endl;
}