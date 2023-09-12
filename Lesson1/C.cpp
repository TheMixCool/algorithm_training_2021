#include <iostream>
#include <string>
#include <vector>

std::string UpdateStr(std::string str) {
	std::string res;
	for (auto& var : str) {
		if (isdigit(var)) {
			res += var;
		}
	}
	if (res.size() == 7) {
		res.insert(0, "8495");
	}
	if (res.at(0) == '7') {
		res.at(0) = '8';
	}
	return res;
}

int main() {
	std::string ref;
	std::cin >> ref;
	ref = UpdateStr(ref);
	std::vector<std::string> nums;
	for (int i = 0; i != 3; ++i) {
		std::string tmp;
		std::cin >> tmp;
		std::string res = UpdateStr(tmp);
		nums.push_back(res);
	}
	for (auto& var : nums) {
		if (ref.size() != var.size()) {
			std::cout << "NO" << std::endl;
		}
		else {
			for (int i = 0; i != ref.size(); ++i) {
				if (ref.at(i) != var.at(i)) {
					std::cout << "NO" << std::endl;
					break;
				}
				if (i == ref.size() - 1) {
					std::cout << "YES" << std::endl;
				}
			}
		}
	}
	return 0;
}