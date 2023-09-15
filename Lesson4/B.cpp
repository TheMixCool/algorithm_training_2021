#include <map>
#include <string>
#include <iostream>

int main() {
	std::map<std::string, int> mp;

	std::string temp;
	
	while (std::cin >> temp) {
		if (mp.find(temp) == mp.end()) {
			std::cout << 0 << ' ';
			mp[temp]++;
		}
		else {
			std::cout << mp[temp]++ << ' ';
		}
	}
	return 0;
}