#include <iostream>
#include <set>
#include <string>

int main() {
	std::set<std::string> str;
	std::string temp;

	while (std::cin >> temp) {
		str.emplace(temp);
	}
	std::cout << str.size();
}