#include "exit_mutex.hpp"

hl::exit_mutex::exit_mutex() : should_exit(0) {}

int hl::exit_mutex::get_should_exit() {
    int exit_result = -1;
    exit_mutex_internal.lock();
    exit_result = should_exit;
    exit_mutex_internal.unlock();
    return exit_result;
}

void hl::exit_mutex::set_should_exit() {
    exit_mutex_internal.lock();
    should_exit = 1;
    exit_mutex_internal.unlock();
}