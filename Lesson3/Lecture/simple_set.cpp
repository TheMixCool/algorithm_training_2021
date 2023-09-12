#include <list>
#include <vector>
#include <iostream>

void Add(std::vector<std::list<int>>& v, int val);
bool Find(std::vector<std::list<int>>& v, int val);
void Delete(std::vector<std::list<int>>& v, int val);
void Print(std::vector<std::list<int>>& v);

void Add(std::vector<std::list<int>>& v, int val) {
	if (!Find(v, val)) {
		v.at(val % 10).push_back(val);
	}
}

bool Find(std::vector<std::list<int>>& v, int val) {
	for (auto& ch : v.at(val % 10)) {
		if (ch == val) {
			return true;
		}
	}
	return false;
}

void Delete(std::vector<std::list<int>>& v, int val) {
	for (auto& ch : v.at(val % 10)) {
		if (ch == val) {
			ch = v.at(val % 10).back();
			v.at(val % 10).pop_back();
		}
	}
}

void Print(std::vector<std::list<int>>& v) {
	for (auto& ch : v) {
		for (auto& ch2 : ch) {
			std::cout << ch2 << ' ';
		}
		std::cout << std::endl;
	}
}

int main() {

	std::vector<std::list<int>> v;
	v.resize(10);

	Add(v, 15);
	Add(v, 25);
	Add(v, 25);
	Add(v, 35);
	Add(v, 67);
	Print(v);
	
}