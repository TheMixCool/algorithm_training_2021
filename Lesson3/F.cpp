#include <set>
#include <iostream>
#include <string>

int main() {
	std::string str1, str2;
	std::cin >> str1 >> str2;

	std::set<std::string> st;

	for (int i = 0; i != str2.size() - 1; ++i) {
		st.emplace(str2.substr(i, 2));
	}
	int res = 0;

	for (int i = 0; i != str1.size()-1; ++i) {
		std::string tmp = str1.substr(i, 2);
		if (st.find(tmp) != st.end()) {
			res++;
		}
	}
	std::cout << res;
}