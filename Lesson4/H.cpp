#include <map>
#include <iostream>
#include <string>
#include <algorithm>

bool Check(std::map<char, int>& mpW, std::map<char, int> &mpS) {
	for (auto& [k, v] : mpW) {
		if (mpS[k] != v) {
			return false;
		}
	}

	return true;
}

int main() {
	int g, s;
	std::cin >> g >> s;

	std::string word;
	std::cin >> word;

	std::map<char, int> mpW, mpS;
	for (auto& c : word) {
		mpW[c]++;
	}

	std::string str;
	std::cin >> str;

	int counter = 0;

	for (int i = 0; i != g; ++i) {
		mpS[str.at(i)]++;
	}

	for (int i = 0; i != str.size(); ++i) {
		
		if (Check(mpW, mpS)) {
			counter++;
		}
		mpS[str.at(i)]--;
		if (i + g < str.size()) {
			mpS[str.at(i + g)]++;
		}
	}
	std::cout << counter;
}