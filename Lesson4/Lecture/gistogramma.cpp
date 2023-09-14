#include <map>
#include <iostream>
#include <string>

int main() {
	std::string str = "Hello, world!";
	std::map<char, int> mp;
	for (auto& ch : str)
		mp[ch]++;

	int max = 0;
	for (auto& [ch, cn] : mp) {
		if (cn > max) 
			max = cn;
	}
	int temp = max;
	for (int i = 0; i != max; ++i) {
		for (auto& [ch, cn] : mp) {
			if (cn >= temp) 
				std::cout << '#';
			else 
				std::cout << ' ';
		}
		temp--;
		std::cout << std::endl;
	}
	for (auto& [ch, cn] : mp)
		std::cout << ch;
	
	return 0;
}