#include <set>
#include <iostream>
#include <fstream>
#include <string>

void Foo(std::set<long long>& st, std::string& str) {
	int i = 0;
	std::string res;
	while (i != str.size()) {
		if (isdigit(str.at(i))) {
			res += str.at(i);
			i++;
		}
		else {
			st.emplace(std::stoi(res));
			res = "";
			i++;
		}
	}
	st.emplace(std::stoi(res));
}

int main() {
	std::vector<long long> v;
	std::set<long long> st1, st2;

	std::string temp1, temp2;

	std::ifstream fin;
	fin.open("input.txt");

	if (fin.is_open()) {
		std::getline(fin, temp1);
		std::getline(fin, temp2);

	}
	fin.close();

	Foo(st1, temp1);
	Foo(st2, temp2);

	std::set<long long> res(st1);

	for (auto& v : st1) {
		if (st2.find(v) == st2.end()) {
			res.erase(v);
		}
	}

	for (auto& s : res) {
		std::cout << s << ' ';
	}

}