#include <iostream>
#include <Windows.h>
#include <vector>

#include "deque.h"

int main()
{
	deque<int> test;
	test.push_back(54);
	test.push_back(254);
	test.push_back(377);

	std::cout << "index 0: " << test.at(0) << "\n";
	std::cout << "index 1: " << test.at(1) << "\n";
	std::cout << "index 2: " << test.at(2) << "\n";
	std::cout << "front index: " << test.get_front() << "\n";

	std::cout << "get_size: " << test.get_size() << "\n";

	for (int i = 0; i < test.get_length(); i++) {
		std::cout << "iterator: " << test.at(i) << "\n";
	}

	std::cout << "back index: " << test.get_back() << "\n";

	Sleep(INFINITE);
}