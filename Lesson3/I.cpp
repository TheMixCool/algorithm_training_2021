#include <string>
#include <set>
#include <iostream>
#include <vector>

void Foo(std::set<std::string>& group, std::set<std::string>& current) {
	std::set<std::string> res(group);
	for (auto& g : group) {
		if (current.find(g) == current.end()) {
			res.erase(g);
		}
	}
	group = res;
}

int main() {
	int count = 0;
	std::cin >> count;
	
	std::set<std::string> allLangPerson;
	std::vector<std::set<std::string>> langPersons;

	for (int i = 0; i != count; ++i) {
		int n = 0;
		std::cin >> n;
		std::set<std::string> stTemp;
		for (int j = 0; j != n; ++j) {
			std::string str;
			std::cin >> str;
			stTemp.emplace(str);
			allLangPerson.emplace(str);
		}
		langPersons.push_back(stTemp);
	}

	std::set<std::string> tempSet(langPersons.at(0));

	for (auto& v : langPersons) {
		Foo(tempSet, v);
	}

	std::cout << tempSet.size() << std::endl;
	for (auto& t : tempSet) {
		std::cout << t << std::endl;
	}
	std::cout << allLangPerson.size() << std::endl;
	for (auto& t : allLangPerson) {
		std::cout << t << std::endl;
	}
	return 0;
}