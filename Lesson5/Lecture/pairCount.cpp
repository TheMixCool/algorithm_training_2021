#include <vector>
#include <iostream>

int PairCount(std::vector<int>& v, int k) {
	int res = 0;
	int l = 0;
	int r = l + 1;
	
	while (r != v.size()) {
		if (v[r] - v[l] <= k) {
			r++;
		}
		else if (v[r] - v[l] > k) {
			res += v.size() - r;
			l++;
		}
	}
	return res;
}

int main() {
	std::vector<int> values {1, 3,6,7,8 };
	
	std::cout << PairCount(values, 4);
}