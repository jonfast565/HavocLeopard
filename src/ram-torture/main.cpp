#include "main.hpp"

int main() {
    hl::title_bar bar;
    hl::exit_mutex exiter;

    std::string title_string("RAM Torture");
    bar.print(title_string);

    hl::cpu_utils::single_threaded_loop(exiter, [&]() {
        run_ram_torture(exiter);
    });

    std::cout << "Done!" << std::endl;
    return 0;
}

void run_ram_torture(hl::exit_mutex& exit_mutex_ref) {
    while (true) {
        malloc(sizeof(int8_t));
        auto should_exit = exit_mutex_ref.get_should_exit();
        if (should_exit == 1)
            break;
    }
}