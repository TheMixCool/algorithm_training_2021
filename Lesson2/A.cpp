#include <iostream>
#include <vector>

int main() {
	std::vector<int> nums;
	int temp;
	while (std::cin >> temp) {
		nums.push_back(temp);
	}
	for (int i = 1; i != nums.size(); ++i) {
		if (nums.at(i) <= nums.at(i - 1)) {
			std::cout << "NO" << std::endl;
			return 0;
		}
	}
	std::cout << "YES" << std::endl;
	return 0;
}