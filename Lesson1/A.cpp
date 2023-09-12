#include <iostream>
#include <string>

int main() {
	int var1 = 0, var2 = 0;
	std::string ch;
	std::cin >> var1 >> var2 >> ch;
	if (ch == "fan") {
		std::cout << var1 << std::endl;
	}
	if (ch == "auto") {
		std::cout << var2 << std::endl;
	}
	if (ch == "heat") {
		if (var2 > var1) {
			std::cout << var2 << std::endl;
		}
		else {
			std::cout << var1 << std::endl;
		}
	}
	if (ch == "freeze") {
		if (var2 < var1) {
			std::cout << var2 << std::endl;
		}
		else {
			std::cout << var1 << std::endl;
		}
	}
	return 0;
}