#include <iostream>
#include "TimePlusPlus.hpp"

int main() {
	const timepp_t time = TimePlusPlus::Initialize();
	
	std::cout << time.hours << "h " << time.minutes << "m\n";
}
