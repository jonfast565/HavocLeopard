//
// Created by jfast on 1/17/2019.
//

#ifndef CHAOS_MONKEY_EXIT_MUTEX_H
#define CHAOS_MONKEY_EXIT_MUTEX_H

#include <mutex>

namespace cmonkey {
namespace cpu_destroyer {

    class exit_mutex {
    private:
        int should_exit = 0;
        std::mutex exit_mutex_internal;
    public:
        exit_mutex() : should_exit(0) {}

        void set_should_exit() {
            exit_mutex_internal.lock();
            should_exit = 1;
            exit_mutex_internal.unlock();
        }

        int get_should_exit() {
            int exit_result = -1;
            exit_mutex_internal.lock();
            exit_result = should_exit;
            exit_mutex_internal.unlock();
            return exit_result;
        }
    };
}
}

#endif //CHAOS_MONKEY_EXIT_MUTEX_H
