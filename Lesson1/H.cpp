#include <iostream>

int main() {
	int timeA, timeB, countA, countB;
	std::cin >> timeA >> timeB >> countA >> countB;

	int minA, maxA, minB, maxB;

	minA = (countA - 1) * (timeA + 1) + 1;
	maxA = (countA - 1) * (timeA + 1) + 1 + (2 * timeA);

	minB = (countB - 1) * (timeB + 1) + 1;
	maxB = (countB - 1) * (timeB + 1) + 1 + (2 * timeB);

	int minRes, maxRes;
	minA > minB ? minRes = minA : minRes = minB;
	maxA < maxB ? maxRes = maxA : maxRes = maxB;

	if (minRes > maxRes) {
		std::cout << -1 << std::endl;
	}
	else {
		std::cout << minRes << ' ' << maxRes << std::endl;
	}
	return 0;
}