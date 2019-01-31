//
// Created by jfast on 1/17/2019.
//

#ifndef HL_CPU_TORTURE_MAIN_H
#define HL_CPU_TORTURE_MAIN_H

#include <iostream>
#include "../title-utils/title_bar.hpp"
#include "../cpu-utils/cpu_utils.hpp"

#define COUNTER_EXIT_CHECK 100000

void run_cpu_torture(hl::exit_mutex &exit_mutex_ref);

#endif //HL_CPU_TORTURE_MAIN_H
