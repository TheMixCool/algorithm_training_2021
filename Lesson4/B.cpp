#include <string>
#include <iostream>
#include <map>

int main() {
	std::map<std::string, int> mp;

	std::string temp;

	while (std::cin >> temp) {
		if (mp.find(temp) == mp.end()) {
			std::cout << mp[temp]++ << ' ';
		}
		else {
			std::cout << mp[temp]++ << ' ';
		}
	}
	return 0;
}