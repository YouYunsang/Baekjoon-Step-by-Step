#include <iostream>

int main() {
	std::string ID;
	std::cin >> ID;

	if (ID.size() > 50) {
		std::cin >> ID;
	}

	std::cout << ID << "??!" << std::endl;

	return 0;
}
