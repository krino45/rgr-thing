#include <iostream>
#include <csignal>
#include <thread>
#include <chrono>

volatile bool running = true;

void signalHandler(int signum) {
    std::cout << "\nЗавершение работы. (сигнал " << signum << ")" << std::endl;
    running = false;
}

int main () { 
    std::signal(SIGINT, signalHandler);
    std::signal(SIGTERM, signalHandler);

    while (running) {
        std::this_thread::sleep_for(std::chrono::seconds(5));
        std::cout << "Приложение работает..." << std::endl;
        for (int i = 1; i < 11; i+=2)
	{
		for (int j = 0; j < (11 - i) / 2; j++) std::cout << " ";
		for (int j = 0; j < i; j++) std::cout << "#";
		for (int j = 0; j < (11 - i) / 2; j++) std::cout << " ";
		std::cout << std::endl;
	}
    }
    std::cout << "Приложение завершено." << std::endl;
    return 0;
}
