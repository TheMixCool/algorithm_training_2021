#include <iostream>
#include <map>
#include <utility>

int GetCount(std::map<std::pair<int, int>, int>& mp) {
	int count = 0;

	std::map<int, int> mp1;
	std::map<int, int> mp2;

	for (auto& [f, s] : mp) {
		mp1[f.first]++;
	}
	for (auto& [f, s] : mp) {
		mp2[f.second]++;
	}
	return mp1.size() + mp2.size() - 2;
}


int main() {
	std::map<std::pair<int, int>, int> mp;
	
	mp[std::pair<int, int>(1, 1)]++;
	mp[std::pair<int, int>(1, 2)]++;
	mp[std::pair<int, int>(1, 3)]++;
	mp[std::pair<int, int>(2, 2)]++;

	std::cout << GetCount(mp);

}