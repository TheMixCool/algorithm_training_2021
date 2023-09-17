#include <iostream>
#include <vector>

std::vector<int> makePrefix(std::vector<int> &v){
	std::vector<int> prefix(v.size() + 1, 0);
	for (int i = 1; i != v.size() + 1; ++i) {
		if (v.at(i - 1) == 0) {
			prefix.at(i) = prefix.at(i - 1) + 1;
		}
		else {
			prefix.at(i) = prefix.at(i - 1);
		}
	}
	return prefix;

}

int ZeroCount(std::vector<int>& v, int left, int right) {
	return v[right] - v[left];
}


int main() {
	std::vector<int> v {1, 0, 1, 1, 0, 0, 0, 1, 0};
	std::vector<int> prefix = makePrefix(v);
	
	for (auto& c : prefix) {
		std::cout << c << ' ';
	}
	std::cout << std::endl;

	std::cout << ZeroCount(prefix, 2, 5);
}