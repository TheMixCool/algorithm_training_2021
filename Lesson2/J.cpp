#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

int main() {
	int count = 0;
	double prev;
	std::cin >> count >> prev;
	double left = 30, right = 4000;

	for (int i = 0; i != count-1; ++i) {
		double temp = 0;
		std::string str;

		std::cin >> temp >> str;

		if (std::abs(temp - prev) < std::pow(10,-6)) {
			continue;
		}

		if (str == "closer") {
			if (temp > prev) {
				left = std::max(left, (temp + prev) / 2);
			}
			else {
				right = std::min(right, (temp + prev) / 2);
			}
		}
		else {
			if (temp < prev) {
				left = std::max(left, (temp + prev) / 2);
			}
			else {
				right = std::min(right, (temp + prev) / 2);
			}
		}
		prev = temp;
	}

	std::cout << left << ' ' << right;
	return 0;
}