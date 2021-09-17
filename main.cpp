
#include <chrono>
#include <thread>

int main() {
	std::this_thread::sleep_for(std::chrono::milliseconds(9999999999999999999));
}

