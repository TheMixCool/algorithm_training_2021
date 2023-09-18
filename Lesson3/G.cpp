#include <set>
#include <iostream>

int main() {
	int count = 0;
	std::cin >> count;
	std::set<int> res;
	for (int i = 0; i != count; ++i) {
		int tempL = 0, tempR = 0;
		std::cin >> tempL >> tempR;
		if (tempR >= 0 && tempL >= 0) {
			if (tempL + tempR == count - 1) {
				res.emplace(tempL);
			}
		}
	}
	std::cout << res.size();
	return 0;
}