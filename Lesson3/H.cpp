#include <set>
#include <iostream>

int main() {
	int count = 0;
	std::cin >> count;
	std::set<double> res;
	for (int i = 0; i != count; ++i) {
		double tempL = 0, tempR = 0;
		std::cin >> tempL >> tempR;
		res.emplace(tempL);
	}
	std::cout << res.size();
	return 0;
}