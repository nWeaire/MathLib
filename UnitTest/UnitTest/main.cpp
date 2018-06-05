#include "unittest.h"
#include <iostream>

int main() {

	if (runUnitTests() == false) {
		std::cout << "Unit test failed!" << std::endl;
		return -1;
		system("pause");
	}
	std::cout << "All tests passed successfully." << std::endl;
	system("pause");
	return 0;
}