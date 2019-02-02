#include "main.hpp"

int main() {
    hl::console_utils::exit_mutex exiter;
    hl::console_utils::title_bar bar;

    std::string title_string("CPU Torture");
    bar.print(title_string);

    hl::cpu_utils::run_job(exiter, [&]() {
        run_cpu_torture(exiter);
    });

    std::cout << "Done!" << std::endl;
    return 0;
}

void run_cpu_torture(hl::console_utils::exit_mutex &exit_mutex_ref) {
    uint64_t counter = 0;
    while (true) {
        if (counter % COUNTER_EXIT_CHECK == 0) {
            auto should_exit = exit_mutex_ref.get_should_exit();
            if (should_exit == 1)
                break;
        }
        counter++;
        if (counter >= UINT64_MAX) {
            counter = 0;
        }
    }
}