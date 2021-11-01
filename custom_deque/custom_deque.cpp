#include <iostream>
#include <Windows.h>
#include <vector>

#include "deque.h"

int main()
{
	//int amt = 0;
	//std::cin >> amt;

	//for (uint16_t i = 0; i < amt; i++) {
	//	uint32_t val;
	//	std::cin >> val;
	//	test.push_back(val);
	//}

	deque<int> test;

	for (;;) {
		test.push_back(12313);
		test.push_back(532434);
		test.push_back(223423);
		test.push_back(23523);

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

		test.clear_deque();
	}
}