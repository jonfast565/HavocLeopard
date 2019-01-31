#include "main.hpp"

int main() {
    hl::exit_mutex exiter;
    hl::title_bar bar;

    std::string title_string("CPU Torture");
    bar.print(title_string);

    hl::cpu_utils::run_job(exiter, [&]() {
        run_cpu_torture(exiter);
    });

    std::cout << "Done!" << std::endl;
    return 0;
}

void run_cpu_torture(hl::exit_mutex &exit_mutex_ref) {
    auto t = (unsigned int) time(nullptr);
    while (true) {
        srand(t);
        rand();
        auto should_exit = exit_mutex_ref.get_should_exit();
        if (should_exit == 1)
            break;
    }
}