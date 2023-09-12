#include <iostream>
#include <set>

int main() {
	std::set<int> st;
	int temp;
	while (std::cin >> temp) {
		st.emplace(temp);
	}
	std::cout << st.size();
	return 0;
}