#include <vector>
#include <iostream>
#include <algorithm>

int BestTeamSum(std::vector<int>& v) {
	int bestSum = 0;
	int currentSum = 0;
	int last = 0;

	for (int i = 0; i != v.size()-1; ++i) {
		while (last != v.size() && (last == i || (v[i] + v[i + 1] >= v[last]))) {
			currentSum += v[last];
			last += 1;
		}
		bestSum = std::max(bestSum, currentSum);
		currentSum -= v[i];
	}

	return bestSum;
}

int main() {
	std::vector<int> values {1, 3,6,7,8 };
	
	std::cout << BestTeamSum(values);
}