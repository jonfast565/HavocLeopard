#include "main.h"

void run_cpu_torture(hl::exit_mutex& exit_mutex_ref) {
    auto t = (unsigned int) time(nullptr);
    while (true) {
        srand(t);
        auto should_exit = exit_mutex_ref.get_should_exit();
        if (should_exit == 1)
            break;
    }
}

int main() {
    hl::exit_mutex exit_mutex_nonref;
    hl::title_bar bar;

    std::string title_string("CPU Torture");
    bar.print(title_string);

    auto t1 = std::thread(run_cpu_torture, std::ref(exit_mutex_nonref));

    std::cout << "Press any key to exit..." << std::endl;
    getchar();

    exit_mutex_nonref.set_should_exit();
    t1.join();

    std::cout << "Done!" << std::endl;
    return 0;
}