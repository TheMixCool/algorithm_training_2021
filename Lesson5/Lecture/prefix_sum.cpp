#include <iostream>
#include <vector>

std::vector<int> makePrefix(std::vector<int> &v){
	std::vector<int> prefix(v.size() + 1, 0);
	for (int i = 1; i != v.size() + 1; ++i) {
		prefix.at(i) = prefix.at(i - 1) + v.at(i - 1);
	}
	return prefix;

}

int RSQ(std::vector<int>& v, int left, int right) {
	return v[right] - v[left];
}


int main() {
	std::vector<int> v {1, 2, 3, 4, 5};
	std::vector<int> prefix = makePrefix(v);
	
	for (auto& c : prefix) {
		std::cout << c << ' ';
	}
	std::cout << std::endl;

	std::cout << RSQ(prefix, 2, 5);
}