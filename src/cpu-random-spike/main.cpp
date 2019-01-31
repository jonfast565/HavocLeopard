#include "main.hpp"

int main() {
    hl::exit_mutex exiter;
    hl::title_bar bar;

    std::string title_string("Random CPU Spikes");
    bar.print(title_string);

    hl::cpu_utils::run_job(exiter, [&]() {
        run_cpu_random_spike(exiter);
    });

    std::cout << "Done!" << std::endl;
    return 0;
}

void run_cpu_random_spike(hl::exit_mutex &exit_mutex_ref) {
    auto seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine generator(seed);

    auto range_min = 0;
    auto range_max = 100;
    int range_half = (range_max - range_min) / 2;
    auto wait_time_ms = 500;

    std::uniform_int_distribution<int> distribution(range_min, range_max);
    auto random_number = std::bind(distribution, generator);

    while (true) {
        if (random_number() >= range_half) {
            std::this_thread::sleep_for(std::chrono::milliseconds(wait_time_ms));
        }
        auto should_exit = exit_mutex_ref.get_should_exit();
        if (should_exit == 1)
            break;
    }
}