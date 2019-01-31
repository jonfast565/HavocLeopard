#ifndef HL_EXIT_MUTEX_H
#define HL_EXIT_MUTEX_H

#include <mutex>

namespace hl {
    class exit_mutex {
    private:
        int should_exit = 0;
        std::mutex exit_mutex_internal;
    public:
        exit_mutex();
        void set_should_exit();
        int get_should_exit();
    };
}

#endif //HL_EXIT_MUTEX_H
