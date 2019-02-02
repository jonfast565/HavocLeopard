#include "cpu_utils.hpp"

void hl::cpu_utils::single_threaded_loop(hl::console_utils::exit_mutex &exiter, std::function<void()> runnable) {
    auto t1 = std::thread(runnable);

    std::cout << "Press any key to exit..." << std::endl;
    getchar();

    exiter.set_should_exit();
    t1.join();
}

void hl::cpu_utils::multi_threaded_loop(hl::console_utils::exit_mutex &exiter, std::function<void()> runnable) {
    std::vector<std::thread> active_threads;

    unsigned hardware_concurrency = std::thread::hardware_concurrency();
    unsigned scale_factor = SCALE_FACTOR;

    for (unsigned i = 0; i < hardware_concurrency * scale_factor; i++) {
        auto t1 = std::thread(runnable);
        active_threads.push_back(std::move(t1));
    }

    std::cout << "Press any key to exit..." << std::endl;
    getchar();

    exiter.set_should_exit();

    for (auto &t : active_threads) {
        t.join();
    }
}

bool hl::cpu_utils::loop_should_be_multi_threaded() {
    unsigned hardware_concurrency = std::thread::hardware_concurrency();
    return hardware_concurrency > 1;
}

void hl::cpu_utils::run_job(hl::console_utils::exit_mutex &exiter, const std::function<void()> &job_function) {
    if (hl::cpu_utils::loop_should_be_multi_threaded()) {
        hl::cpu_utils::multi_threaded_loop(exiter, job_function);
    } else {
        hl::cpu_utils::single_threaded_loop(exiter, job_function);
    }
}
