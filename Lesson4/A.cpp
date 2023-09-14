#include <string>
#include <map>
#include <iostream>

int main() {
	std::string tempKey, tempValue;
	std::map<std::string, std::string> mp;
	std::map<std::string, std::string> mp2;

	int count = 0;
	std::cin >> count;

	for (int i = 0; i != count; ++i) {
		std::cin >> tempKey >> tempValue;
		mp[tempKey] = tempValue;
		mp2[tempValue] = tempKey;
	}

	std::cin >> tempKey;

	if (mp.find(tempKey) != mp.end())
		std::cout << mp[tempKey];
	else
		std::cout << mp2[tempKey];
	return 0;
}