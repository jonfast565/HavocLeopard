//
// Created by jfast on 1/29/2019.
//

#ifndef CHAOS_MONKEY_TITLE_BAR_H
#define CHAOS_MONKEY_TITLE_BAR_H

#include <iostream>

namespace cmonkey {
    namespace cpu_destroyer {

        class title_bar {
        public:
            void print() {
                std::cout << "--- CPU Destroyer ---" << std::endl;
                std::cout << "Author: Jon Fast" << std::endl;
                std::cout << "Version: 1.0" << std::endl;
                std::cout << "--------------------" << std::endl;
            }
        };
    }
}

#endif //CHAOS_MONKEY_TITLE_BAR_H
