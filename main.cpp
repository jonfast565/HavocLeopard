#include "main.h"

void run_memory_chaos(cmonkey::cpu_destroyer::exit_mutex& exit_mutex_ref) {
    while (true) {
        malloc(sizeof(int8_t));
        auto should_exit = exit_mutex_ref.get_should_exit();
        if (should_exit == 1)
            break;
    }
}

void run_cpu_chaos(cmonkey::cpu_destroyer::exit_mutex& exit_mutex_ref) {
    auto t = (unsigned int) time(nullptr);
    while (true) {
        srand(t);
        auto should_exit = exit_mutex_ref.get_should_exit();
        if (should_exit == 1)
            break;
    }
}

int main() {
    cmonkey::cpu_destroyer::exit_mutex exit_mutex_nonref;

    cmonkey::cpu_destroyer::title_bar bar;
    bar.print();

    auto t1 = std::thread(run_memory_chaos, std::ref(exit_mutex_nonref));
    auto t2 = std::thread(run_cpu_chaos, std::ref(exit_mutex_nonref));

    std::cout << "Press any key to exit..." << std::endl;
    getchar();

    exit_mutex_nonref.set_should_exit();
    t1.join();
    t2.join();

    std::cout << "Done!" << std::endl;
    return 0;
}