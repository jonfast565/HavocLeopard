#ifndef HL_CPU_UTILS_H
#define HL_CPU_UTILS_H

#define SCALE_FACTOR 2

#include <thread>
#include <functional>
#include <chrono>
#include <vector>
#include <iostream>

#include "../exit-utils/exit_mutex.hpp"

namespace hl {
    namespace cpu_utils {
        void single_threaded_loop(hl::exit_mutex &exiter, std::function<void()> runnable);

        void multi_threaded_loop(hl::exit_mutex &exiter, std::function<void()> runnable);

        bool loop_should_be_multi_threaded();

        void run_job(hl::exit_mutex &exiter, const std::function<void()> &job_function);
    }
}

#endif //HL_CPU_UTILS_H
