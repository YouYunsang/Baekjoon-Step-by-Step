#include <iostream>

int main() {
	double a, b;
	
	std::cin >> a;
	std::cin >> b;

	std::cout.precision(9);
	std::cout << std::fixed;

	std::cout << a/b;

	return 0;
}
