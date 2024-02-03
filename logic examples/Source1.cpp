#include <iostream>

int main() {
	//program that does logic
	int value_1 = 10;
	int value_2 = 9;

	std::cout << "value 1 = " << value_1 << std::endl;
	std::cout << "value 2 = " << value_2 << std::endl;

	if (value_1 < value_2) {
		std::cout << "value 1 is less than value 2" << std::endl;
	}
	else if (value_1 == value_2) {
		std::cout << "value 1 is equal to value 2" << std::endl;
	}
	else {
		std::cout << "value 1 is greater than value 2" << std::endl;
	}

	//for loops
	for (int i = 1; i <= 10; i++) {
		std::cout << "iteration, " << i << ", of loop" << std::endl;
	}

	return 0;
}