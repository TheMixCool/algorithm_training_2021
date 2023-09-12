#include <iostream>
#include <string>
#include <vector>

int main() {
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	std::cin >> a >> b >> c >> d >> e;
	
	if (d >= a) {
		if (e >= b || e >= c) {
			std::cout << "YES";
			return 0;
		}
	}
	if (d >= b) {
		if (e >= a || e >= c) {
			std::cout << "YES";
			return 0;
		}
	}
	if (d >= c) {
		if (e >= b || e >= a) {
			std::cout << "YES";
			return 0;
		}
	}
	std::cout << "NO";

	return 0;

}