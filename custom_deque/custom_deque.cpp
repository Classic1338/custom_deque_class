#include <iostream>
#include <Windows.h>
#include <vector>

#include "deque.h"

int main()
{
	deque<const char*> test;

	test.push_back("test");
	test.push_back("test2");
	test.push_back("test3");
	test.push_back("test4");

	std::cout << "index 0: " << test.at(0) << "\n";

	std::cout << "index 1: " << test.at(1) << "\n";

	std::cout << "index 2: " << test.at(2) << "\n";

	std::cout << "index 3: " << test.at(3) << "\n";

	std::cout << "front index: " << test.get_front() << "\n";

	std::cout << "get_size: " << test.get_size() << "\n";

	for (int i = 0; i < test.get_length(); i++) {
		std::cout << "iterator at index " << i << ": " << test.at(i) << "\n";
	}

	std::cout << "back index: " << test.get_back() << "\n";

	Sleep(INFINITE);
}