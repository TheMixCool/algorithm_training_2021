#include <vector>
#include <map>
#include <iostream>

std::map<int,int> MakePrefix(std::vector<int>& v) {
	std::map<int, int> mp {{0, 1}};
	int currentSum = 0;

	for (auto& ch : v) {
		currentSum += ch;
		if (mp.find(currentSum) != mp.end()) {
			mp[currentSum] += 1;
		}
		else {
			mp[currentSum] = 0;
		}
	}
	return mp;
}

int CountZeroSumRanges(std::map<int, int> &mp) {
	int countRanges = 0;
	
	for (auto& [k, v] : mp) {
		int cntSum = v;
		countRanges += cntSum * (cntSum - 1) / 2;
	}
	return countRanges;
}

int main() {
	std::vector<int> values {1, 3, 5, -5, -3, -1, 0, 1, 3 ,-3};
	std::map<int, int> prefix(MakePrefix(values));
	
	std::cout << CountZeroSumRanges(prefix);
}