#include <iostream>

int main() {
	double a = 0, b = 0, c = 0;
	std::cin >> a >> b >> c;
	if ((a + b > c) && (a + c > b) && (b + c > a)) {
		std::cout << "YES" << std::endl;
	}
	else {
		std::cout << "NO" << std::endl;
	}
	return 0;
}