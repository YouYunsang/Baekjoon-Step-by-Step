#include <iostream>

int main() {
	int y;
	std::cin >> y;

	while (y < 1000 || y > 3000) {
		std::cin >> y;
	}

	std::cout << y - 543 << std::endl;

	return 0;
}
