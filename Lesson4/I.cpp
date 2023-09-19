#include <iostream>
#include <string>
#include <set>
#include <map>
#include <cctype>

void Check(std::string &str, int& res) {
	int count = 0;

	for (auto& c : str) {
		if (isupper(c)) {
			count++;
		}
	}
	if (count != 1) {
		res++;
	}	
}

std::string Init(std::string& str) {
	std::string res;
	for (char c : str) {
		res += tolower(c);
	}
	return res;
}

void Find(std::set<std::string>& st, std::string& str, int &res) {
	if (st.find(str) == st.end()) {
		res++;
	}
}

int main() {
	int count = 0;
	std::cin >> count;

	std::map<std::string, std::set<std::string>> dict;

	for (int i = 0; i != count; ++i) {
		std::string word, temp;
		std::cin >> word;
		temp = Init(word);
		dict[temp].emplace(word);
	}

	int res = 0;

	std::string temp;

	while (std::cin >> temp) {
		if (dict.find(Init(temp)) == dict.end()) {
			Check(temp, res);
		}
		else {
			Find(dict[Init(temp)], temp, res);
		}
	}
	std::cout << res;
	return 0;
}