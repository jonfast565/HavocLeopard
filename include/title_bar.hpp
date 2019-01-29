//
// Created by jfast on 1/29/2019.
//

#ifndef HL_TITLE_BAR_H
#define HL_TITLE_BAR_H

#include <iostream>

namespace hl {
    class title_bar {
    public:
        void print(std::string& title_string) {
            std::cout << "--- HL " << title_string << " ---" << std::endl;
            std::cout << "Author: Jon Fast" << std::endl;
            std::cout << "Version: 1.0" << std::endl;
            std::cout << "--------------------" << std::endl;
        }
    };
}

#endif //HL_TITLE_BAR_H
