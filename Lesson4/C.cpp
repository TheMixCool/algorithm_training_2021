#include <map>
#include <string>
#include <iostream>

int main() {
	std::map<std::string, int> mp;

	std::string temp;
	int max = 0;
	std::string res;

	while (std::cin >> temp) {
		mp[temp]++;
	}
	for (auto& [k, v] : mp) {
		if (v > max) {
			max = v;
			res = k;
		}
	}

	std::cout << res;
	return 0;
}