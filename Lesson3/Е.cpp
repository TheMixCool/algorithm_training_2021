#include <set>
#include <iostream>

int main() {
	std::set<int> st;
	for (int i = 0; i != 3; ++i) {
		int temp;
		std::cin >> temp;
		st.emplace(temp);
	}

	int value = 0;
	std::cin >> value;
	int count = 0;
	while (value > 0) {
		if (st.find(value % 10) == st.end()) {
			st.emplace(value % 10);
			value /= 10;
			count++;
		}
		else {
			value /= 10;
		}
	}

	std::cout << count;
	return 0;
}