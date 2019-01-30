#include "main.hpp"

void single_threaded_loop(hl::exit_mutex &exit_mutex_nonref);
void multi_threaded_loop(hl::exit_mutex &exit_mutex_nonref, unsigned hardware_concurrency, unsigned scale_factor);
void run_cpu_torture(hl::exit_mutex& exit_mutex_ref);

int main() {
    hl::exit_mutex exit_mutex_nonref;
    hl::title_bar bar;

    std::string title_string("CPU Torture");
    bar.print(title_string);

    unsigned hardware_concurrency = std::thread::hardware_concurrency();
    unsigned scale_factor = 2;
    if (hardware_concurrency <= 0) {
        single_threaded_loop(exit_mutex_nonref);
    } else {
        multi_threaded_loop(exit_mutex_nonref, hardware_concurrency, scale_factor);
    }

    std::cout << "Done!" << std::endl;
    return 0;
}

void run_cpu_torture(hl::exit_mutex& exit_mutex_ref) {
    auto t = (unsigned int) time(nullptr);
    while (true) {
        srand(t);
        auto should_exit = exit_mutex_ref.get_should_exit();
        if (should_exit == 1)
            break;
    }
}

void single_threaded_loop(hl::exit_mutex &exit_mutex_nonref) {
    auto t1 = std::thread(run_cpu_torture, std::ref(exit_mutex_nonref));

    std::cout << "Press any key to exit..." << std::endl;
    getchar();

    exit_mutex_nonref.set_should_exit();
    t1.join();
}

void multi_threaded_loop(hl::exit_mutex &exit_mutex_nonref, unsigned hardware_concurrency, unsigned scale_factor) {
    std::vector<std::thread> active_threads;

    for (unsigned i = 0; i < hardware_concurrency * scale_factor; i++) {
        auto t1 = std::thread(run_cpu_torture, std::ref(exit_mutex_nonref));
        active_threads.push_back(std::move(t1));
    }

    std::cout << "Press any key to exit..." << std::endl;
    getchar();

    exit_mutex_nonref.set_should_exit();

    for (auto& t : active_threads) {
        t.join();
    }
}