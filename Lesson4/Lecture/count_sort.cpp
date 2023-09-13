#include <iostream>
#include <vector>

int main() {
	int a, b;
	std::cin >> a >> b;

	std::vector<int> arrA(10), arrB(10);

	while (a > 0) {
		arrA.at(a % 10)++;
		a /= 10;
	}

	while (b > 0) {
		arrB.at(b % 10)++;
		b /= 10;
	}

	for (int i = 0; i != 10; ++i) {
		if (arrA.at(i) != arrB.at(i)) {
			std::cout << "NO" << std::endl;
			return 0;
		}
	}
	std::cout << "YES" << std::endl;
	return 0;

}